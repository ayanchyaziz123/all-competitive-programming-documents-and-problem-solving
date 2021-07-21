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
    ll n;
    cin >> n;
    ll arr[n + 1];
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (ll i = 0; i < n; i++)
    {
        if (arr[i] < 10)
        {
            ll cnt = 2;
            for (ll j = 2; j < arr[i]; j++)
            {
                if (arr[i] % j == 0)
                {
                    cnt++;
                    if (cnt > 3)
                    {
                        break;
                    }
                }
            }
            if (cnt == 3)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            ll sum = arr[i] % 10;
            ll sq = sqrt(arr[i]);
            //cout << sq << endl;
            //cout << pow(sq, 2) << endl;
            //cout << arr[i] << endl;
            bool flag = false;
            ll eq = pow(sq, 2);
            if (eq == arr[i])
            {
                flag = true;
            }
            if (sum % 2 == 0 || flag == true)
            {
                //cout << "hellow" << endl;
                ll cnt = 2;
                for (ll j = 2; j < arr[i]; j++)
                {
                    if (arr[i] % j == 0)
                    {
                        cnt++;
                        if (cnt > 3)
                        {
                            break;
                        }
                    }
                }
                if (cnt == 3)
                {
                    cout << "YES" << endl;
                }
                else
                {
                    cout << "NO" << endl;
                }
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}