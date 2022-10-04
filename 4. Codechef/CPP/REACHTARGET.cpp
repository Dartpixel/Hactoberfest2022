#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int a, b, testcase;
    cin >> testcase;
    while (testcase--)
    {
        cin >> a >> b;
        int sol = a - b;
        cout << sol << endl;
    }

    return 0;
}
