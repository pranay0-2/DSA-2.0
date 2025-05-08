#include <iostream>
#include <vector>

using namespace std;

int main(){

       vector<vector<int>> v1 = {{1,2,3} , {4,5,} , {7,8,9,10,12}};
       
     // printing the 2d vector
     for(int i = 0; i < v1.size(); i++){
        for(int j = 0; j < v1[i].size(); j++){
            cout<<v1[i][j]<< " ";
        }
        cout<<endl;
     }


     vector<int> v;
     for(int i = 0; i < 5; i++){
        v.push_back(i);
     }

     cout<<v.size()<<endl;
     cout<<v.capacity()<<endl;

return 0;

}