#include <iostream>

using namespace std;

int isReverse(int n){
    
    int res = 0;
    while(n > 0){
        int lastDigit = n % 10;
        int res = res * 10 + lastDigit;
        n = n/10;
    } 
    return res;
}

bool isPalindrome(int n){
         
    int rev = isReverse(n);
    return n == rev;


}

int main(){

       cout<<isPalindrome(121);

return 0;

}