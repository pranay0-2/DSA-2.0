#include <iostream>
#include <string>
using namespace std;


int friend_pairing(int n){
    //base case
    if(n == 1 ){
          return 1;
    }

    if(n == 2){
        return 2;
    }

    // recursive case
    // single person + pair of n-1 persons
    return friend_pairing(n-1) + (n-1) * friend_pairing(n-2);


}


int main(){
 
     cout<<friend_pairing(3);

return 0;

}