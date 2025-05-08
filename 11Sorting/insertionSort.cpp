#include <iostream>

using namespace std;

void printArray(int *arr , int n){
    for(int i = 0; i < n; i++){
        cout<< arr[i] << " ";
    }
}

void insertionSort(int *arr , int n){

    for(int i = 0; i < n; i++){
        int j = i;

        while(j > 0 && arr[j - 1] > arr[j]){
            swap(arr[j-1] , arr[j]);
            j--;
        }
    }
    printArray(arr , n);
}

int main(){

    int arr[5] = {5 , 4 , 3 , 1 , 2};

    insertionSort(arr , 5);

return 0;

}