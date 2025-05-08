#include <iostream>

using namespace std;

void decimalToBinary(int decNum){
    int n = decNum;
    int binary = 0;
    int pow = 1;

    while(n > 0){
        int rem = n % 2;
        binary += rem * pow;
        n = n/2;
        pow = pow * 10;
    }
    cout<<binary<<endl;
}

int main(){

       decimalToBinary(15);

return 0;

}