#include <iostream>

using namespace std;

// sorted array recursion
bool isSorted(int arr[] , int n){

    if(n == 0 || n == 1){
        return true;
    }
 
    if(arr[0] > arr[1]){
        return false;
    }

    return isSorted(arr + 1 , n - 1);
}

// sorted at particular index 
bool isSorted2(int arr[] , int n , int i){

    if(i == n-1){
        return true;
    }

    if(arr[i] > arr[i+1]){
        return false;
    }

    return isSorted2(arr , n , i+1);
}

int main(){

       int arr[5]  = {1, 2, 9, 4, 5};
       isSorted(arr, 5) ? cout << "Sorted" : cout << "Not Sorted";


       isSorted2(arr , 5 , 2) ? cout << "Sorted" : cout << "Not Sorted";


return 0;

}