#include <iostream>

using namespace std;

bool oddEven(int a){
     
     bool isEven = true;
     if(a%2 == 0){
     return  isEven = true;
     }
     else{
        
    return isEven = false;
     }

   
}

int main(){
       int n;
       cout<<"Enter the number "<<endl;
       cin>> n;
       int evenOdd = oddEven(n);
       cout<<evenOdd;
       
return 0;

}