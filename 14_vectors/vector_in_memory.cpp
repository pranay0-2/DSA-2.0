#include <iostream>
#include <vector>

using namespace std;

int main(){

       vector<int> v1 = {1,2,3,4};
       cout<<"size : "<<v1.size()<<endl;
       cout<<"capacity: "<<v1.capacity()<<endl;

       v1.push_back(3);
       v1.push_back(3);
       v1.push_back(3);
       v1.push_back(3);
       v1.push_back(3);
       cout<<"size : "<<v1.size()<<endl;
       cout<<"capacity: "<<v1.capacity()<<endl;
       
       //printing the vector
       for(int i = 0; i < v1.size(); i++){
        cout<<v1[i]<< " ";
       }



return 0;

}