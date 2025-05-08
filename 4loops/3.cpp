// sum of n natural number
#include <iostream>

using namespace std;

int main(){

       int n ;
       cout<<"Enter your n :"<<endl;
       cin>>n;
       
       cout<<endl;
       int sum = 0;

       for(int i = 1; i <= n; i++){
          sum += i;
       }
         cout<<sum;
return 0;

}