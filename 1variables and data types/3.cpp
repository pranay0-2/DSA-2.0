#include <iostream>

using namespace std;

int main(){

       int english , maths , science;
       cout<<"Enter your English marks"<<endl;
       cin>>english;
       cout<<"Enter your maths marks"<<endl;
       cin>>maths;
       cout<<"Enter your science marks"<<endl;
       cin>>science;

       float average = (maths + english + science)/3.0;
       cout<<"Your average marks is "<<average<<endl;


return 0;

}