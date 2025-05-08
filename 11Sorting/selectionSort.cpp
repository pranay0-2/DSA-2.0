#include <iostream>

using namespace std;

void printArray(int *arr , int n){
    for(int i = 0; i < n; i++){
        cout<< arr[i] << " ";
    }
    cout<<endl;
}


void selectionSort(int *arr , int n){

    for(int i = 0; i < n-1; i++){
        
        int mini = i;

        for(int j = i+1; j < n; j++){
            if(arr[j] < arr[mini]){
                mini = j;
            }
        }

        swap(arr[i] , arr[mini]);
    }
    printArray(arr , n);
}


int main(){

    int arr[5] = {5 , 4 , 3 , 1 , 2};

    selectionSort(arr , 5);

return 0;

}