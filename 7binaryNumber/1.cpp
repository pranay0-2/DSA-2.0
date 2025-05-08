#include <iostream>

using namespace std;

void binaryTodecimal(int binNum){
    int n = binNum;
    int deciNum = 0;
    int pow = 1;

    while(n > 0){
        int lastDigit = n % 10;
        deciNum += lastDigit * pow;
        pow = pow * 2;
        n = n/10;

    }
         cout<<deciNum<<endl;
}

int main(){

       binaryTodecimal(100);

return 0;

}