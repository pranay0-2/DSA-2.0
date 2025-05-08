#include <iostream>

using namespace std;


class Student{
      // properties// attributes
      public: // access modifier
      string name;
      float cgpa; 
     
       // methods// functions
      void getPercentage(){
        cout<<"Percentage: "<< cgpa*10<<"%"<<endl;
      }

};

int main(){

       Student s1; // class student , object s1
       cout<<sizeof(s1)<<endl;
       s1.name = "John Doe";
       cout<<s1.name<<endl;

return 0;

}