#include <iostream>
using namespace std;

int main() {
// 1 1 1 1 
// 2 2 2 2 
// 3 3 3 3 
// 4 4 4 4 
    for(int i=1;i<=4;i++){
        for(int j=1;j<=4;j++){
            cout << i <<" ";
        }
        cout<<endl;
    }
// *
// **
// ***
// ****
    for(int i=1;i<=4;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";

        }
        cout<<endl;
    }
    cout<<endl;
// ****
// ***
// **
// *
    int n=4;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=(n-i+1);j++){
            cout<<"*";

        }
        cout<<endl;
    }
    cout<<endl;
// 1
// 12
// 123
// 1234
    int m=4;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=i;j++){
            cout<<j;

        }
        cout<<endl;
    }
    cout<<endl;
// A
// BC
// DEF
// GHIJ
    int a=4;
    char ch='A';
    for(int i=1;i<=a;i++){
        for(int j=1;j<=i;j++){
            cout<<ch;
            ch++;

        }
        cout<<endl;
    }
    cout<<endl;
    
// *****
// *   *
// *   *
// *****
    int b=4;
    for(int i=1;i<=b;i++){
        cout<<"*";
        for(int j=1;j<=b-1;j++){
            if(i==1||i==b){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<"*"<<endl;
    }
    cout<<endl;
//    *
//   **
//  ***
// ****
    int c=4;

    for(int i=1;i<=c;i++){
        for(int j=1;j<=c-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl;
// 1 
// 2 3 
// 4 5 6 
// 7 8 9 10 
    int d=4;
    int num=1;
    for(int i=1;i<=d;i++){
        for(int j=1;j<=i;j++){
            cout<<num<<" ";
            num++;

        }
        cout<<endl;
    }
    cout<<endl;
//    *
//   ***
//  *****
// *******
// *******
//  *****
//   ***
//    *
    int e=4;

    for(int i=1;i<=e;i++){
        for(int j=1;j<=e-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=(e-2)*i-1;j++){
            cout<<"*";
        }
        cout<<endl;
    } 
    for (int i=e;i>=1;i--){
        for(int j=1;j<=e-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=(e-2)*i-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl;
    
// *      *
// **    **
// ***  ***
// ********
// ********
// ***  ***
// **    **
// *      *
    int var=4;

    for(int i=1;i<=var;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        
        for(int j=1;j<=2*(var-i);j++){
            cout<<" ";
        }
        
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=var;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        
        for(int j=1;j<=2*(var-i);j++){
            cout<<" ";
        }
        
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}