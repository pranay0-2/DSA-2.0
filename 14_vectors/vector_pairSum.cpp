#include <iostream>
#include <vector>

using namespace std;

// brute force approach to find the pair sum in an array
int pairSum(int *arr , int n , int target){
    
    for(int i = 0; i < n-1; i++){
        for(int j = i+1; j < n; j++){
            if(arr[i] + arr[j] == target){
                cout<< i<< " " << j<<endl;
                return 1;
            }
        }
        
    }
    cout<< "No pair found "<<endl;
    return 0;
}

// using two pointer approach to find the pair sum in an array
vector<int> pairSum2(vector<int> arr , int n , int target){
               
    int low = 0; int high = n-1; 
    while(low < high){
        if(arr[low] + arr[high] == target){
            cout<<low << " " << high<<endl;
            return {low , high};          
        }
        else if(arr[low] + arr[high] < target){
               low++;
        }
        else{
            high--;
        }
    }
    
  cout<< "No pair found" <<endl;
  return {-1 , -1};
  
}

int main(){

    vector<int> arr =  {2,7,11,15};
       int target = 9;

       pairSum2(arr , 4 , target);



return 0;

}