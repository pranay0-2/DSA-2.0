#include <iostream>

using namespace std;

// Staicase Search technique for sorted matrix only
bool search(int arr[][4] , int n , int m , int target){
    int i = 0; int j = m-1;

    while(i < n && j >= 0){
                 
          if(arr[i][j] == target){
            cout<<"Found  at cell ( " << i << "," << j << ")";  
            return true;
          }

          else if(target < arr[i][j]){
            j--;
          }
          else{
            i++;
          }
    }
    return false;
}

int main(){

    int arr[3][4] = {
        { 1,  2,  3,  4 },
        { 5,  6,  7,  8 },
        { 9, 10, 11, 12 }
    };


    search(arr , 3 ,4 , 1);


return 0;

}