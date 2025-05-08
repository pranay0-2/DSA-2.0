#include <iostream>

using namespace std;

int countSetBits(int n){
    int count = 0;
    while(n > 0){
        
       int lastDigit =  n & 1;
        count += lastDigit; // if last digit is 1 , increment count
        n = n >> 1;
        
    }
    
    return count;
}

int main(){

    int n;
    cout<< "Enter a number: "<<endl;
    cin>>n;

    cout<<n<<"has " <<countSetBits(n)<<" set bits"<<endl; 
 
return 0;

}