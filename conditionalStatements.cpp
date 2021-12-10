//BY CODIVAS
//here we'll dicuss the code of 2nd class:
// The topic mainly we've covered are:
//if statement
// if..else statements
// nested if statements
// if-else-if ladder

#include <iostream>
using namespace std;
int main(){
    int num = 2; // assign 2 value to the num 
    // from line 14 to 6 => if statements
   if(num%2 == 0){
       cout<<"num is even"<<endl;
   }
 //from line 12 to 17 => if else statements

    if(num % 2 == 0){ // if our num % 2 == 0 means remainder is 0 then => num is even else num is odd
        cout<<"num is even"<<endl;
    }                               
    else{
        cout<<"num is odd"<<endl;
    }

    //nested if else statements => when we are using if inside another if (as it shown below)
    //from line 21 to 24  => nested if statements / 21 to 31 => nested if else statements
    if(num >= 0){
        if(num % 2 == 0){
             cout<<"num is positive integer as well as even "<<endl;
        }
        else{
            cout<<"num is positive integer but not even"<<endl; 
        }
    }
    else {
        cout<<"num is negative integer"<<endl;
    }

    //if-else-if ladder => when our" if" is not true for some value then we'll go on "else if" , if it's not too then we'll  go on "else"
     // see the code written below
     // from line 36 to 44 => if-else-if ladder ----> first it'll go on "if" condition if it is false then it'll check the "else if" condition if it's false too then it'll print the "else cndition"
     if(num >0){
         cout<<"num is a postive number which is greater than 0"<<endl;
     }
     else if(num < 0){
         cout<<"num is a negative number"<<endl;
     }
     else {
         cout<<"num is 0"<<endl;
     }
    return 0;
}