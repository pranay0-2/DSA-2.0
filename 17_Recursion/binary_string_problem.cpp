#include <iostream>

using namespace std;

void binary_string(int n, int last_digit, string ans){
     // base case
     if(n == 0 || n == 1){
        cout<<ans<<endl;
        return;
     }


     // if last digit is 0, we can add 0 or 1
       if(last_digit != 1){
        binary_string(n-1 , 0 , ans + '0');
        binary_string(n-1 , 1 , ans + '1');
       }
       // if last digit is 1, we can only add 0
       else{
        binary_string(n-1 , 0 , ans + '0');
       }

    
}

int main(){

       binary_string(10 , 0 , "");

return 0;

}