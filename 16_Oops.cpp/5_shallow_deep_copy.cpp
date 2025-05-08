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

         // shallow copy constructor
        //  car(car &obj){
        //     this->name = obj.name;
        //     this->color = obj.color;
        //     mileage = obj.mileage;// shallow copy , reference is copied , 
        //     // both objects will point to the same memory location
        //     // this is not a good practice as it can lead to memory leaks and dangling pointers           
        //  }
         

         // deep copy constructor
         car(car &obj){
            this->name = obj.name;
            this->color = obj.color;
            mileage = new int;
            *mileage = *obj.mileage;
         }
           
};
int main(){

       car c1("maruti 800" , "red");

       car c2(c1); // copy constructor
       cout<<c2.name<<endl;
       cout<<c2.color<<endl;
       
    //    *c2.mileage = 20;
    //    cout<<*c1.mileage<<endl;
    //    cout<<*c2.mileage<<endl;
       // changing the value of c2 will also change the value of c1
       // this is because both objects are pointing to the same memory location

    
         // deep copy constructor
         *c2.mileage = 50;
         cout<<*c1.mileage<<endl;
         cout<<*c2.mileage<<endl;
       
return 0;

}