#include <iostream>

using namespace std;

// recursion
void printArr(int n){
           
    if(n > 10)
        return;
    cout << n << " ";
    printArr(n+1);
}


int printArr2(int n){
    if(n == 0)
        return 1;

     cout << n << " ";
     return printArr2(n-1);
}

int factorial(int n){
    if(n == 0)
     return 1;

     return n * factorial(n-1);
}

int main(){
        
        
      printArr(1);
        // printArr2(10);   
        cout << "Factorial: " << factorial(5)<<endl;

return 0;

}