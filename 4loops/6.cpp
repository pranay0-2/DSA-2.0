//check prime or not
#include <iostream>

using namespace std;

int main(){
       int n;
       bool isPrime = true;
       cout<<"enter number"<<endl;
       cin>>n;

       for(int i = 2; i < n; i++){

        if( n % i  == 0 ){
              isPrime = false;
              break;
        }
    }

    if(isPrime == true){
        cout<<"Prime number"<<endl;
    }
    else{
        cout<<"Not prime"<<endl;
    }
    

return 0;

}