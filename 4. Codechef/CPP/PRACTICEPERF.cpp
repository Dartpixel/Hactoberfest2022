#include <iostream>
using namespace std;

int main()
{
    int arr[4], c = 0;
    for (int i = 0; i < 4; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < 4; i++)
    {
        if (arr[i] >= 10)
        {
            c = c + 1;
        }
    }
    cout << c << endl;
    return 0;
}
