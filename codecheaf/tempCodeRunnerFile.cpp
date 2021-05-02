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
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        ll sum = 0;
        ll cnt = 0;
        cin >> n >> k;
        vector<ll> v;
        if (n % 2 == 0)
        {
            for (ll i = 1; i <= n;)
            {
                sum = sum + i;
                if (sum > 0)
                    cnt++;
                v.push_back(-i);
                i++;
                if (i == n + 1)
                    break;
                sum = sum + i;
                if (sum > 0)
                    cnt++;
                v.push_back(i);
                i++;
                if (i == n + 1)
                    break;
            }
        }
        else
        {
            for (ll i = 1; i <= n;)
            {
                sum = sum + i;
                if (sum > 0)
                    cnt++;
                v.push_back(i);
                i++;
                if (i == n + 1)
                    break;
                sum = sum + i;
                if (sum > 0)
                    cnt++;
                v.push_back(-i);
                i++;
                if (i == n + 1)
                    break;
            }
        }

        if (cnt == k)
        {

            for (ll i = 0; i < v.size(); i++)
            {
                cout << v[i] << " ";
            }
            cout << endl;
        }
        else if (cnt > k)
        {

            for (ll i = n - 1; i >= 0; i -= 2)
            {
                if (v[i] < 0)
                {
                    v[i] = abs(v[i]);
                }
                else
                {
                    v[i] = -v[i];
                }
                cnt--;
                if (cnt == k)
                    break;
            }
            for (ll i = 0; i < n; i++)
            {
                cout << v[i] << " ";
            }
            cout << endl;
        }
        else if (cnt < k)
        {

            for (ll i = 0; i < n; i++)
            {
                if (v[i] < 0)
                {
                    v[i] = abs(v[i]);
                    cnt--;
                    if (cnt == k)
                        break;
                }
            }
            for (ll i = 0; i < n; i++)
            {
                cout << v[i] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}