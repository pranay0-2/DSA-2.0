#include <iostream>

using namespace std;

void printArray(int *arr , int n){
    for(int i = 0; i < n; i++){
        cout<< arr[i] << " ";
    }
    cout<<endl;
}

void bubbleSort(int *arr , int n){
   
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j] , arr[j+1]);
            }
        }
    }
    printArray(arr , n);
}

int main(){

       int arr[5] = {5 , 4 , 3 , 1 , 2};

       bubbleSort(arr , 5);

return 0;

}