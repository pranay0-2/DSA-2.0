// Income Tax calculator
#include <iostream>

using namespace std;

#define l lakh;

int main(){

       int income;
       cout<<"Enter your income"<<endl;
       cin>>income;

       if(income < 5l){
            cout<<"0% Tax"<<endl;
       }
       else if(income < 10l && income > 5l){
        cout<<"20% Tax"<<endl;
       }
       else{
        cout<<"30% Tax"<<endl;
       }



return 0;

}