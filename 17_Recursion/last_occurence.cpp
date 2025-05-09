#include <iostream>
#include <vector>

using namespace std;

int lastOccurence(vector<int> arr , int i , int target){

    if(i == arr.size()){
        return -1;
    }

    int IdxFound = lastOccurence(arr , i+1 , target);

    if(IdxFound == -1  && arr[i] == target){
            return i;   
    }

    return IdxFound;
}

int main(){

         vector<int> arr = {1, 2 , 5 ,4  , 10};
       cout<<lastOccurence( arr , 0 , 5);

return 0;

}