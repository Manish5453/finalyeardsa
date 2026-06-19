#include <iostream>
using namespace std;

int prod(int a, int b){
    int prod=a*b;
    return prod;
}
void num(int a){
    if(a%2==0){
        cout<<"even number"<<endl;
    }
    else{
        cout<<"odd number"<<endl;
    }
}
bool isEven(int n){
    if(n%2==0){
        return true;
    }
    else{
        return false;
    }
}

int factorial(int m){
    int fact=1;
    for(int i=1;i<=m;i++){
        fact*=i;
    }
    cout<<"factorial(" << m << ") = "<< fact << endl;
    return fact;
}

bool isPrime(int x){
    if(x == 1){
        return false;
    }
    for(int i=2;i<=x-1;i++){
        if(x%i==0){
            return false;
        }
        
    }
    return true;
}

int main(){
    int p=prod(4,2);
    cout<<p<<endl;
    num(2);
    cout<<isEven(2)<<endl;
    int f = factorial(3);
    cout<<f<<endl;
    cout<<isPrime(1)<<endl;
    return 0;
}