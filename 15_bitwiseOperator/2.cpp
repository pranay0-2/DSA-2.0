#include <iostream>

using namespace std;

// even or odd

// void evenOrOdd(int n){
//     if(n & 0 == 0){
//         cout << n << " is odd" <<endl; 
//     }
//     else{
//         cout<< n << " is even" <<endl;
//     }
// }


void evenOrOdd(int n){
    if(!(n&1)){
        cout << n << " is even" <<endl;
    }
    else{
        cout<< n << " is odd" <<endl;
    }
}
int main(){

       int n; 
       cout<< "Enter a number: ";
       cin>>n;

       evenOrOdd(n);


return 0;

}