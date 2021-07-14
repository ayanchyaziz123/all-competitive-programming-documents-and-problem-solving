#include <bits/stdc++.h>
#define ll long long int
#define INF 2e18
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ll tc;
    cin >> tc;
    while (tc--)
    {
        ll n;
        cin >> n;
        ll j = 1;
        ll i = 2;
        if (n == 2)
        {
            cout << 2 << " " << 1 << endl;
        }
        else if (n == 1)
        {
            cout << 1 << endl;
        }
        else
        {
            ll j = 1;
            ll i = 2;
            for (i = 2; i < n; i += 2)
            {
                cout << i << " ";
                if (i + 2 >= n)
                {
                    if ((i + 2) - n == 1)
                    {
                        cout << n << " ";
                        cout << j << " ";
                    }
                    else
                    {
                        j += 2;
                        cout << i - 1 << " ";
                        cout << n << " ";
                        cout << j << " ";
                    }

                    break;
                }
                cout << j << " ";
                j += 2;
            }
            cout << endl;
        }
    }

    return 0;
}