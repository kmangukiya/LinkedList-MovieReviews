#include <iostream>
#include<vector>
#include "ReviewNode.h"
using namespace std;
class ReviewDB
{
  public:
  
  //costructors
  ReviewDB();
  ReviewDB( const ReviewDB &copy);
  ~ReviewDB();
  
  //getters and setters
  int getTotalReviews();
 
  // other methods
  void insert(string reviewerName, string restaurantName, string category, float deliveryCost, vector<int> customerating);
  void printAll();
  void printRestaurant(string restroName);
  void printCategory(string category);
  void printRecent(int number);
  
  private:
  
  ReviewNode *head;
  int numReviews=0;
 
  
};