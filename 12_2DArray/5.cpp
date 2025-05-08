#include <iostream>

using namespace std;

int findNum(int arr[][3] , int n , int m , int find){
    
    int sum = 0;
    for(int i = 0; i < n; i++){
         for(int j = 0; j < m; j++){
            if(arr[i][j] == find) sum++;
         }
    }
    cout<<sum;
    return sum;
}

int main(){

     int arr[2][3] = { {4,7,8}, {8,8,7} };
     int n = 2, m = 3;
     int find = 7;


      findNum(arr , n , m , 80);

     
return 0;

}