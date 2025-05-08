#include <iostream>

using namespace std;

void subArray(int *arr , int n){
       for(int start = 0; start < n; start++){
              for(int end = start; end < n; end++){
                     cout<< "(" << start << "," << end << ")";
              }
              cout<<endl;
       }
}

int main(){

       int arr[] = {1,2,3,4,5,6,7,8,9};
       int n = 9;
       subArray(arr , 9);

return 0;

}