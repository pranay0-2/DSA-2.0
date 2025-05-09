#include <iostream>

using namespace std;

int X_to_power_n(int x , int n){
    if(n == 0){
        return 1;
    }
    if(n == 1){
        return x;
    }
    return x*X_to_power_n(x , n-1);
}

int main(){

       
    int x = 2;
    int n = 5;
    cout<<X_to_power_n(x , n);

return 0;

}