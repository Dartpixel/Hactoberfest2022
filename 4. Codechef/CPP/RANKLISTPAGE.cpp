#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int a, testcase;
    cin >> testcase;
    while (testcase--)
    {
        cin >> a;
        int sol = a % 25;
        if (a <= 25)
        {
            cout << "1" << endl;
        }
        else if (a % 25 == 0)
        {
            cout << a / 25 << endl;
        }
        else
        {
            cout << (a / 25) + 1 << endl;
        }
    }

    return 0;
}