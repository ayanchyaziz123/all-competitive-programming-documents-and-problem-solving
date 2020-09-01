#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n >= 1 && 50 >= n)
    {
        cout << 100 << endl;
    }
    else if (n >= 51 && 100 >= n)
    {
        cout << 50 << endl;
    }

    else
    {
        cout << 0 << endl;
    }

    return 0;
}