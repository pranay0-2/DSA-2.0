#include <iostream>

using namespace std;

bool powerofTwo(int n){
    if( (n & (n-1)) == 0){
        return true;
    }
    return false;
}

int main(){

    int n ;
    cout<< "Enter a number: "<<endl;
    cin>>n;
   

    if(powerofTwo(n)){
        cout<<n<<" is a power of 2"<<endl;
    }
    else{
        cout<<n<<" is not a power of 2"<<endl;
    }

return 0;

}