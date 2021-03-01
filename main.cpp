/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include "ReviewDB.h"
#include<vector>
using namespace std;

int main()
{
    cout<<"\n       Welcome to Yelp-like Website";
   
 
    ReviewDB db;
    bool stopLoop = true;
    while(stopLoop)
    {
        
        cout<<"\n## ----------------------------------------- ##\n\n";
        cout<<"Available choices are:\n\n1. Insert customer review\n2. Print reviews by restaurant name\n3. Print reviews by restaurant category\n4. Print N most recent reviews\n5. Print all reviews\n6. Exit the application\n";
        int choice = 0;
        cout<<"\nEnter your choice: ";
        cin>>choice;
        switch(choice)
        {
        
            case 1: {
            
            string name="", restro="", type = "";
            float deliverycost =0.0; 
            vector<int> ratings;
            
            cout<<"\nEnter name of the reviwer: ";
            std::getline(std::cin >> std::ws, name);
            
            cout<<"\nEnter name of the restaurant: ";
            std::getline(std::cin >> std::ws, restro);
            
            cout<<"\nEnter the category of the restaurant: ";
            std::getline(std::cin >> std::ws, type);
            
            cout<<"\nEnter delivery cost of the restaurant: ";
            cin>>deliverycost;
            
            bool correct=true;
            
            while(correct)
            {
        
                cout<<"\nOut of 1-10 enter your rating for restaurant's delivery: ";
                int temp1=0;
                cin>>temp1;
                
                int temp2=0;
                cout<<"\nOut of 1-10 enter your rating for restaurant's food quality: ";
                cin>>temp2;
                
                int temp3=0;
                cout<<"\nOut of 1-10 enter your rating for restaurant's overall satisfaction: ";
                cin>>temp3;
              
            
                if(temp1<0 || temp1>10 || temp2<0 || temp2>10 || temp3<0 || temp3>10)
                {
                    cout<<"\n\n\t***ERROR, Correct range for rating is 1-10, try again!!***\n";
                    continue;
                }
                correct = false;
                ratings.push_back(temp1);
                ratings.push_back(temp2);
                ratings.push_back(temp3);
                
            }
            
            db.insert(name, restro, type, deliverycost, ratings);
            
            cout<<"\n\t***RECORD ADDED INTO THE DATABASE***\n\n";
           
                
            }
            break;
        
            case 2: { 
                
                string restro="";
                cout<<"\nEnter the name of restaurant to display reviews: ";
                std::getline(std::cin >> std::ws, restro);
                db.printRestaurant(restro);
  
            
            }
            break;
        
            case 3:{ 
                
                string category="";
                cout<<"\nEnter the category of restaurant to display reviews: ";
                std::getline(std::cin >> std::ws, category);
               db.printCategory(category);
  
            
            } break;
            
            case 4: { 
                
                int recent=0;
                cout<<"\nHow many most recent do you want to display: ";
                cin>>recent;
               db.printRecent(recent);
            
            }break;
            
            case 5: db.printAll(); break;
            
            case 6: exit(0); break;
            default: cout<<"\nEnter correct choice, try again!!!\n";
           
        
        }
    }
    
    
    return 0;
    
    
}
