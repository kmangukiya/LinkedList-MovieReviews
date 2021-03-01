#include<string.h>
#include<vector>
#include "ReviewDB.h"
using namespace std;

ReviewDB::ReviewDB()
{
  numReviews=0;
  head = NULL;
}
 

ReviewDB::ReviewDB(const ReviewDB &param)
{
    numReviews = param.numReviews;
    head=param.head;
}

ReviewDB::~ReviewDB()
{
    
}

int ReviewDB::getTotalReviews()
{
    return numReviews;
}


void ReviewDB::insert(string reviewerName, string restaurantName, string category, float deliveryCost, vector<int> customerating)
{
  ReviewNode *temp = new ReviewNode(reviewerName, restaurantName, category, deliveryCost, customerating);
  temp->setNext(head);
  head=temp;
  temp -> display();
  numReviews+=1;
}

void ReviewDB::printRestaurant(string restroName)
{
     cout<<"\n\n";
    cout<<"\tREVIEWS FOR "<<(restroName)<<endl;
    cout<<"  -----------------------------------------\n\n";
    ReviewNode *ptr = head;
    bool flag = false;
    while (ptr != NULL)
    {
        if(ptr->getrestaurantName() == restroName)
        {
            ptr->display();
            flag = true;
        }
        ptr = ptr->getNext();
    }
    
     if(flag==false)
    {
        cout<<"\tNo reviews found\n\n";
    }
}

void ReviewDB::printCategory(string category)
{
    cout<<"\n\n";
    cout<<"\tREVIEWS FOR "<<(category)<<" RESTAURANTS"<<endl;
    cout<<"  -----------------------------------------\n\n";
    ReviewNode *ptr = head;
    bool flag=false;
    while (ptr != NULL)
    {
      if(ptr->getCategory()==category)
      {
        ptr->display();
        flag = true;
      }
      ptr = ptr->getNext();
    }
    
    if(flag==false)
    {
        cout<<"\tNo reviews found\n\n";
    }
}

void ReviewDB::printRecent(int number)
{
    cout<<"\n\n";
    cout<<"\t"<<number<<" MOST RECENT REVIEWS"<<endl;
    cout<<"  -----------------------------------------\n\n";
    ReviewNode *ptr = head;
    int count=0;
    
    if(numReviews<number)
    {
        cout<<"\tNot enough reviews\n\n";
        return;
    }
    
    while (ptr != NULL && count<number)
    {
      ptr->display();
      ptr = ptr->getNext();
      count+=1;
    }
}

void ReviewDB::printAll()
{
  ReviewNode *ptr = head;
  bool flag = false;
  while (ptr != NULL)
  {
      ptr->display();
      flag = true;
      ptr = ptr->getNext();
  }
  
   if(flag==false)
    {
        cout<<"\tNo reviews found\n\n";
    }
}
