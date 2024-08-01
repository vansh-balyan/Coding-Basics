#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "Enter any character: ";
    cin >> ch;

    if (ch >= 97 && ch <= 122)
    {
        cout << "Lower Case";
    }
    else if (ch >= 65 && ch <= 90)
    {
        cout << "Upper Case";
    }
    else if (ch >= 48 && ch <= 57)
    {
        cout << "Numeric";
    }
    else if (ch >= 33 && ch <= 47 || ch >= 58 && ch <= 64 || ch >= 91 && ch <= 96 || ch >= 123 && ch <= 126)
    {
        cout << "Special Character";
    }
    else 
    {
        cout << "Invalid!";
    }

}