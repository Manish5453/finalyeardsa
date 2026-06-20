//conversion of binary to decimal and decimal to binary.
#include <iostream>
using namespace std;

void BinToDec(int binNum){
    int n = binNum;
    cout<<"Decimal no. for "<<n<<" is :";
    int decNum=0;
    int pow=1;
    while(n>0){
        int lastDig=n%10;
        decNum += lastDig*pow;
        pow=pow*2;
        n=n/10;
    }
    cout<<decNum<<endl;

}

void DecToBin(int dec){
    int n = dec;
    cout<<"Binary no. for "<<n<<" is :";
    int pow=1;
    int binNum=0;

    while(n>0){
        int rem = n%2; 
        binNum += (rem * pow);
        n=n/2;
        pow=pow*10;
    }
    cout<<binNum<<endl;
}

int main() {
    BinToDec(101);
    DecToBin(13);
    return 0;
}
