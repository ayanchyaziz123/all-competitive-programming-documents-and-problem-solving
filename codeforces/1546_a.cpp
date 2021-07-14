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
        ll arr[n + 1];
        ll brr[n + 1];
        ll arr_sum = 0;
        ll brr_sum = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
            arr_sum += arr[i];
        }
        for (ll i = 0; i < n; i++)
        {
            cin >> brr[i];
            brr_sum += brr[i];
        }
        if (arr_sum == brr_sum)
        {
            ll i = 0;
            vector<ll> ans1;
            vector<ll> ans2;
            while (i < n)
            {
                ll sum1 = 0;
                ll sum2 = 0;
                arr[i] = arr[i] - 1;
                for (ll k = 0; k < n; k++)
                {
                    sum1 += arr[i];
                }
                for (ll j = 0; j < n; j++)
                {
                    brr[j] = brr[j] + 1;
                    for (ll k = 0; k < n; k++)
                    {
                        sum2 += brr[k];
                    }
                    if (sum1 == sum2)
                    {
                        ans1.push_back(i);
                        ans2.push_back(j);
                    }
                    else
                    {
                        ans1.push_back(0);
                        ans2.push_back(0);
                    }
                    
                }
                i++;
            }

            for (ll k = 0; k < ans1.size(); k++)
            {
                cout << ans1[k] << " " << ans2[k] << endl;
            }
        }
        else
        {
            cout << -1 << endl;
        }
    }

    return 0;
}