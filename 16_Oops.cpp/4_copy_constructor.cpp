#include <iostream>

using namespace std;


class car{
       public: 
         string name;
         string color;

        
         car(string name , string color){
            this->name = name;
            this->color = color;
         }

// copy constructor
// even if we do not define a copy constructor , the compiler will automatically create a default
// copy constructor for us. But it will do a shallow copy.
// a shallow copy means that if we change the value of one object, the other object will also change.
         car(car &obj){
            this->name = obj.name;
            this->color = obj.color;
         }

           
};
int main(){

       car c1("maruti 800" , "red");

       car c2(c1); // copy constructor
       cout<<c2.name<<endl;
       cout<<c2.color<<endl;

return 0;

}