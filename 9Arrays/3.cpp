#include <iostream>

using namespace std;

int linearSearch(int *arr , int n , int target){

    for(int i = 0; i < n; i++){
        if(arr[i] == target){
            return i;
        }
       
    }
    return -1;
} 

int main(){
       
      int n;
      int target = 3
      cout<<"Enter the number of elements"<<endl;
      cin>>n;

      int arr[100];
      cout<<"Enter " << n << " elements " <<endl;
      for(int i = 0; i < n; i++){
         cin>>arr[i];
      }
      
      int linear = linearSearch(arr , n , target);
      

return 0;

}