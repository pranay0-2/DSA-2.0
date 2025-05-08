#include <iostream>

using namespace std;

int main(){

       int num1 , num2;
       char ope;
       cout<<"Enter the num 1"<<endl;
       cin>>num1;
       cout<<"Enter the num2"<<endl;
       cin>>num2;

       cout<<"Enter the operator between + - * / "<<endl;
       cin>>ope;

       switch(ope){
        case '+' :
        cout<<"Sum of num 1 and num2 are "<< num1 + num2<<endl;
        break;

        case '-' : 
        cout<<"Subtraction of num1 and num2 are"<< num1 - num2<<endl;
        break;

        case '*':
        cout<<"Multiplication of num1 and num2 are"<< num1 * num2<<endl;
        break;

        case '/':
        cout<<"Division of num1 and num2 are" << num1 / num2<<endl;
       }



return 0;

}