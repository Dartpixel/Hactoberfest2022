#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int testcase, n;
    cin >> testcase;
    while (testcase--)
    {
        cin >> n;
        if ((n >= 67) && (n <= 45000))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
