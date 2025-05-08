#include <iostream>
#include <vector>

using namespace std;

int main(){

       vector<int> v1;
       cout<<v1.size()<<endl;

       vector<int> v2(5 , 10);
       for(int i = 0; i < v2.size(); i++){
        cout<<v2[i]<< " ";
       }

return 0;

}