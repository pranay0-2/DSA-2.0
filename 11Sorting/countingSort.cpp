#include <iostream>

using namespace std;

void printArray(int *arr , int n){
    for(int i = 0; i < n; i++){
        cout<< arr[i] << " ";
    }
}

void countingSort(int *arr , int n){

        
    

      printArray(arr , n);

}


int main(){

    int arr[5] = {5 , 4 , 3 , 1 , 2};
    countingSort(arr , 5);

return 0;

}