#include <iostream>
#include <vector>

using namespace std;

int firstIndex(vector<int> arr , int i , int target){
    if(i == arr.size()){
        return -1;
        }

    if(arr[i] == target){
        return i;
    }

    return firstIndex(arr , i+1 , target);
}

int main(){
        vector<int> arr = {1, 2 , 5 ,4 , 5 , 6 , 7 , 8 , 9  , 10};
       cout<<firstIndex( arr , 0 , 5);

return 0;

}