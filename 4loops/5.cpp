//to show numbers entered by user except the multiple of 3
// continue
#include <iostream>

using namespace std;

int main(){
    int n;

       for(int i = 0; i < 20; i++){
          cout<<"enter number"<<endl;
          cin>>n;

          if(n%10 == 0){
            continue;
          }

          cout<<"Your entered number is " << n <<endl;
       }

return 0;

}