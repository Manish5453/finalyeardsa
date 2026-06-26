//Write a function that accepts a character(ch) as parameters & returns 
//the character that occurs after ch in the English alphabet.
//Eg:input=‘c’,return value=‘d’

#include <iostream>
using namespace std;
char character(char ch){
    if (ch=='z') {
        return 'a';
    }
    else{
        return (ch+1);
    }
    
}

int main() {
    
    cout<<character('z')<<endl;
    return 0;
}
