#include <iostream>
using namespace std;

int main()
{
    int num, i = 0, sum = 0;
    cout << "Enter the number: ";
    cin >> num;

    if (num >= 0)
    {
        while (i <= num)
        {
            sum += i;
            i++;
        }
        cout << sum;
    }
    else
    {
        cout << "The entered value must be greater than 0";
    }
    return 0;
}