#include <iostream>

using namespace std;


 class user{
       private:
          int id;
          string password;
        
       public: 
          string username;
       
    // constructor
     user(int id){
        this->id = id;
        cout<<"Parameterized constructor for id " <<endl;
     }

     // setters
     void setPassword(string password){
        this->password = password;
     }

     // getters
     string getPassword(){
       return password;
     }
 };
int main(){

       user u1(101);
       u1.username = "johndoe";
       u1.setPassword("abc");

       cout<<u1.username<<endl;
       cout<<u1.getPassword()<<endl;

return 0;

}