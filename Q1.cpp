// Tax Calculator If income is less than 500000 tax will be 0, if income is between 500000 and 100000 tax will be 20,if income is gt 100000 tax will be 30
#include <iostream>
using namespace std;

int main()
{
    int income;
    float tax;
    cout << "Enter your income: ";
    cin >> income;

    if (income < 500000)
    {
        tax = 0;
        cout << "0% tax" << endl;
    }
    else if (income >= 500000 && income < 1000000)
    {
        tax = 0.2 * income;
        cout << "20% tax" << endl;
    }
    else
    {
        tax = 0.3 * income;
        cout << "30% tax" << endl;
    }
    cout << "Your tax is: " << tax << endl;
}