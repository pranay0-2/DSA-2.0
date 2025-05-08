#include <iostream>

using namespace std;

void maxSubarray(int *arr , int n){
    int maxSum = INT_MIN;

      for(int start = 0; start < n; start++){
        for(int end = start; end < n; end++){
            int currSum = 0;

            for(int i = start; i <= end; i++){
                currSum = currSum + arr[i];
               
            }
            cout<<currSum << ","; 
            maxSum = max(maxSum , currSum);
        }
        cout<<endl;
      }

      cout<<"maximum SubArray Sum = " <<maxSum;
     
}

int main(){

       int arr[] = {2 , -3 , 6 , 5 , 4 , 2};
       int n = 6;

       maxSubarray(arr , n);
    //    int maxi = max(maxSubarray(arr , n));
    //    cout<<maxi;

return 0;

}