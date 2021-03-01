#include <iostream> 
#include<vector>
using namespace std;

class ReviewNode
{
    public:
        
        // Constructors
        ReviewNode();
        ReviewNode(string reviwerName, string restaurantName, string Category, float deliveryCost, vector<int> customerating);
        ReviewNode(const ReviewNode &param);
        ~ReviewNode();
        
        
        //Setters
        void setreviewerName(string reviwerName);
        void setrestaurantName(string restaurantName);
        void setCategory(string Category);
        void setdeliveryCost(float deliveryCost);
        void setcustomerRating(vector<int> customerating);
        void setNext(ReviewNode *next);
       
        
        // Getters
        string getreviewerName();
        string getrestaurantName();
        string getCategory();
        float getdeliveryCost();
        ReviewNode *getNext() const;
        vector<int> getcustomerRating();
     
     
        //other methods
        
        void display();
        
    private:
    
        string ReviewerName;
        string RestaurantName;
        string Category;
        float DeliveryCost;
        vector<int> CustomerRating;
        ReviewNode *Next;
      
};
