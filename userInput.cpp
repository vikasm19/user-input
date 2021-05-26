// Taking user input

#include <iostream>   
using namespace std;   
int main() {
    int userInput;  //Decalaring variable
    int *p = &userInput;  //Making a pointer to address the userInput values.
    cout<<"Enter the number from 1 to 100: ";
    cin>>userInput;
    if(userInput < 1) {
        cout<<"Invalid Number!"<<"\n";
    }
    else if(userInput < 100) {
        cout<<"you have entered: "<<*p;
    }
    else {
        cout<<"Invalid Number: ";
    }
    return 0;
}