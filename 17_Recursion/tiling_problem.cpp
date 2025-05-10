#include <iostream>

using namespace std;

// tiling problem

int tp(int n){
    if(n == 0 || n == 1){
        return 1;
    }
    
    // place 2*1 tile vertically
    int ans1 = tp(n-1);

    // place @*1 tile horizontally
    int ans2 = tp(n-2);

    return ans1 + ans2;
}
 


int main(){

       int n = 5;
       cout<<"Tiling problem: " << tp(n)<<endl;

return 0;

}