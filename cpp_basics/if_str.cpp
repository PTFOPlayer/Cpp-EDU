//program to demonstrate if statement in c++ with string
#include <iostream>

using namespace std;

int main()
{
    //declare variables
    string a, b;
    //input
    cout << "Enter two strings: ";
    cin >> a >> b;
    //output
    if (a > b)
    {
        cout << "a is greater than b" << endl;
    }
    else if (a < b)
    {
        cout << "a is less than b" << endl;
    }
    else
    {
        cout << "a is equal to b" << endl;
    }
    return 0;
}