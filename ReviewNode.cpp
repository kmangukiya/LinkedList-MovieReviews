#include "ReviewNode.h"
#include<string.h>
#include<vector>
using namespace std;
ReviewNode::ReviewNode()

{
    ReviewerName="";
    RestaurantName="";
    Category="";
    DeliveryCost=0;
    CustomerRating;
    Next = NULL;
    
}

ReviewNode::ReviewNode(string reviewerName, string restaurantName, string category, float deliveryCost, vector<int> customerating)
{
    
    ReviewerName = reviewerName;
    RestaurantName = restaurantName;
    Category = category;
    DeliveryCost = deliveryCost;
    CustomerRating=customerating;
    Next = NULL;
    
}

ReviewNode::ReviewNode(const ReviewNode &param)
{
    ReviewerName = param.ReviewerName;
    RestaurantName = param.RestaurantName;
    Category = param.Category;
    DeliveryCost = param.DeliveryCost;
    CustomerRating = param.CustomerRating;
    Next = param.Next;
 
}

ReviewNode::~ReviewNode()
{

}


void ReviewNode::setreviewerName(string reviewerName)
{
    ReviewerName = reviewerName;
}

void ReviewNode::setrestaurantName(string restaurantName)
{
    RestaurantName=restaurantName;
}

void ReviewNode::setCategory(string Category)
{
    Category=Category;
}

void ReviewNode::setdeliveryCost(float deliveryCost)
{
    DeliveryCost=deliveryCost;
}

void ReviewNode::setcustomerRating(vector<int>customerating)
{
     CustomerRating=customerating;
}

void ReviewNode::setNext(ReviewNode *next)

{
    Next = next;
}


string ReviewNode::getreviewerName()
{
    return ReviewerName;
}

string ReviewNode::getrestaurantName()
{

    return RestaurantName;
}
        
string ReviewNode::getCategory()
{
    return Category;
}

float ReviewNode::getdeliveryCost()
{
    return DeliveryCost;
}

vector<int> ReviewNode::getcustomerRating()
{
    return CustomerRating;
}

ReviewNode *ReviewNode::getNext() const
{
    return Next;
}

void ReviewNode::display()
{
    cout<<"\n\n## ----------------------------------------- ##\n\n";
    cout<<"\tCustomer Name:  '"<<ReviewerName<<"'"<<endl;
        cout<<"\tRestaurant Name:  '"<<RestaurantName<<"'"<<endl;
        cout<<"\tCategory:  '"<<Category<<"'"<<endl;
        cout<<"\tDelivery Cost:  $"<<DeliveryCost<<endl;
        cout<<"\n\n\tCustomer Reviews\n\n";
        string rateing[3] = {"Delivery time", "Food quality", "Overall satisfaction"};
        

         for (int i=0; i<CustomerRating.size(); i++)
         {
                 cout <<"\t"<<rateing[i]<<" --> "<<CustomerRating[i]<<"/10" << endl;
         }
}
