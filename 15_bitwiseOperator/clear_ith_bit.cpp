#include <iostream>

using namespace std;

int clearIthBit(int n , int i){
    int bitmask = ~(1 << i);  // create a bitmask with 0 at the ith position and 1s elsewhere
    // clear the ith bit by AND n with the bitmask
    return (n & bitmask);
}

int main(){

    int n  , i ;
    cout<< "Enter a number: "<<endl;
    cin>>n;
    cout<< "Enter the bit position you want to check: "<<endl;
    cin>>i;

    cout<<clearIthBit(n , i)<<endl;

return 0;

}