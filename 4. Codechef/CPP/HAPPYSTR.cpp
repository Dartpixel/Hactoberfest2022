#include <iostream>
#include <math.h>
#include <cstring>
using namespace std;
int main()
{
    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        string str;
        cin >> str;
        int sol = str.length();
        if (sol >= 2)
        {
            for (int i = 0; i < sol; i++)
            {
                if ((str[i] == 'a') && (str[i] == 'e') && (str[i] == 'i') && (str[i] == 'o') && (str[i] == 'u'))
                {
                    cout << "Happy" << endl;
                }
            }
        }
        else
        {
            cout << "Sad" << endl;
        }
    }
    return 0;
}