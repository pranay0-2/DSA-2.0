#include <iostream>

using namespace std;

int main(){

       float principal , rate , time;
       cout<<"Enter the principal amoutn: "<<endl;
       cin>>principal;
       cout<<"Enter the interest rate: "<<endl;
       cin>>rate;
       cout<<"Enter the time period: "<<endl;
       cin>>time;
       
       int simpleInterest = (principal*rate*time)/100.0;
       cout<<"simple Interset is "<<simpleInterest<<endl;

return 0;

}