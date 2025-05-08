#include <iostream>

using namespace std;

int main(){

       int row , col;
       cout<<"Enter rows"<<endl;
       cin>>row;
       cout<<"Enter columns"<<endl;
       cin>>col;

       int **matrix = new int*[row]; // creating an array of pointers
       for(int i = 0; i <row; i++){
         matrix[i] = new int[col]; // creating an array of integers
       }
        
       // data store
       int x = 1;
       for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            matrix[i][j] = x++;
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
       }

return 0;

}