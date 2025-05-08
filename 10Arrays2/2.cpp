#include <iostream>

using namespace std;

int kadane(int *arr , int n){
         int sum = 0;
         int maxi = INT_MIN;

         for(int i = 0; i < n; i++){
            sum = sum + arr[i];

            maxi = max(maxi , sum);

            if(sum < 0){
                sum = 0;
            }
         }
         return maxi;
}

int main(){

       int arr[] = {2 , -3 , 6 , 5 , 4 , 2};
       int n = 6;

       cout<<kadane(arr , n);




return 0;

}