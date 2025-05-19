#include <iostream>
#include <string>

using namespace std;


// remove duplicates from a string
void remove_duplicates(string s , int i , string ans , int map[26]) {
     // base case
     if(i == s.length()){
        cout<<ans<<endl;
        return;
     }

     // recursive case
        char ch = s[i];


        // if 
        if(map[ch - 'a'] == true){  // duplicate , skip the character
            remove_duplicates(s , i+1 , ans , map);
        }
        else{ // not duplicate , add the character to the answer
            // agar false hai to pahle true banao , phir add kardo
            map[ch - 'a'] = true;
            remove_duplicates(s , i+1 , ans + s[i] , map);
        }






}
int main(){

       string str = "aabccdeef";
       string ans = "";
       int map[26] = {false};

       remove_duplicates(str , 0 , ans , map);


return 0;

}