#include <iostream>

using namespace std;

int printSum(int arr[][3] , int n , int rowNum){
    int sum = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == rowNum){
                sum = sum + arr[rowNum][j];
            }
        }
    }
    cout<<sum;
    return sum;
}
int main(){

   int arr[3][3] = {    {1,4,9},
                         {11,4,3},
                         {2,2,3}};


    printSum(arr , 3 , 1);

return 0;

}