// Write a program to print absolute number given by the user.

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter the number.";
    cin >> num;
    if (num>=0)
    {
        cout << num;
    }
    else{
        int num1;
        num1=0-num;
        cout << num1;
    }

}