//where user can keep entering number till they enter the multiple of 10
// break
#include <iostream>

using namespace std;
int n;

int main(){

       for(int i = 1; i < 20; i++){
              cout<<"enter number"<<endl;
              cin>>n;

              if(n%10 == 0){
                break;
              }
               
            //   cout<<"your number"<<n<<endl;
       }

return 0;

}