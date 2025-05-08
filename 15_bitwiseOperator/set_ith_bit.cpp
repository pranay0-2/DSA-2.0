#include <iostream>

using namespace std;

int setIthBit(int n , int i){
    int bitmask = 1 << i;
    return (n | bitmask);
}

int main(){

       
    int n  , i ;
       cout<< "Enter a number: "<<endl;
       cin>>n;
       cout<< "Enter the bit position you want to check: "<<endl;
       cin>>i;

       cout<<setIthBit(n , i )<<endl;

return 0;

}