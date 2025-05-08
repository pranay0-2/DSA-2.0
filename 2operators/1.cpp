#include <iostream>

using namespace std;

int main(){
       
       // Explicit typeCasting
       cout<<( (float)10/3 ) << endl;  
       cout<<(char)( 'A' + 1) <<endl; // explicitly we are taking result in char

       // Implicit typeCasting
       cout<< (10/3.0) <<endl;  // this will give me the floating result as float > integer
       cout<<( 'A' + 1 ) <<endl; // result will be in integer since integer > char

       


return 0;

}