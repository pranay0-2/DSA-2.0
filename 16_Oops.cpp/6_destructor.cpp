#include <iostream>

using namespace std;


class car{
       public: 
         string name;
         string color;
         int *mileage;

        
         car(string name , string color){
            this->name = name;
            this->color = color;
            mileage = new int; // dynamic memory allocation
            *mileage = 10;
         }

         // destructor
         ~car(){
            cout<<"Destructor called"<<endl;
            delete mileage;
            mileage = NULL; // 
         }
           
};
int main(){

       car c1("maruti 800" , "red");

       
       cout<<c1.name<<endl;
       cout<<c1.color<<endl;        
       cout<<*c1.mileage<<endl;
      
       
return 0;

}