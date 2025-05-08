#include <iostream>

using namespace std;

int main(){

    //    int arr[100] = {1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10};

    int size;
    cin>>size;

    int *arr = new int[size]; // dynamic memoroy allocation
    // int arr[size]; // this is not allowed in c++

    int x = 1;
    for(int i = 0; i < size; i++){
        arr[i] = x;
        cout<<arr[i]<< " ";
        x++;
    }
return 0;

}