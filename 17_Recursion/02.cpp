#include <iostream>

using namespace std;

int sum(int n){
    if(n == 0)
        return 0;
       
        return sum(n-1) + n;
    
    

}

int main(){

      cout<<"sum:" << sum(10) << endl;

return 0;

}