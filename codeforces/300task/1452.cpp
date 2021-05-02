#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    //freopen("input.txt", "r", stdin);
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        if (n == 1)
            cout << 0 << endl;
        else if (n == 2)
            cout << 1 << endl;
        else if (n == 3)
            cout << 2 << endl;
        else
        {
            if (n % 2 == 0)
            {
                cout << 2 << endl;
            }
            else
            {
                cout << 3 << endl;
            }
        }
    }

    return 0;
}