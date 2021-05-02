#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll a[n];

        ll j = 0;

        if (n % 2 == 0)
        {
            for (ll i = n; i >= 1; i--)
            {
                cout << i << " ";
            }
            cout << endl;
        }
        else
        {
            for (ll i = n; i >= 1; i--)
            {
                a[j] = i;
                j++;
            }

            ll mid = (0 + n) / 2;
            ll x = a[mid + 1];
            ll y = a[mid];
            a[mid] = x;
            a[mid + 1] = y;

            for (ll i = 0; i < n; i++)
            {
                cout << a[i] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}