//program to demonstrate math in c++
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    //declare variables
    int a, b;
    //input
    cout << "Enter two numbers: ";
    cin >> a >> b;
    //output
    cout << "a + b = " << a + b << endl;
    cout << "a - b = " << a - b << endl;
    cout << "a * b = " << a * b << endl;
    cout << "a / b = " << a / b << endl;
    cout << "a % b = " << a % b << endl;
    cout << "a ^ b = " << pow(a, b) << endl;
    return 0;
}