#include <iostream>

using namespace std;

int getIthBit(int n , int i){

    int bitmask = 1<<i; // 1 at ith position and 0 at all other positions
    if((n & bitmask) ==   0){
        return 0;
    }
    else{
        return 1;
    }
}
int main(){

       int n  , i ;
       cout<< "Enter a number: "<<endl;
       cin>>n;
       cout<< "Enter the bit position you want to check: "<<endl;
       cin>>i;

      cout<<getIthBit(n , i);
 
return 0;

}