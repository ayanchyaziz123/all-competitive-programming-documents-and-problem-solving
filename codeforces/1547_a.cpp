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
        ll arr[3 + 1];
        ll brr[3 + 1];
        for (ll i = 0; i < 3; i++)
        {
            cin >> arr[i] >> brr[i];
        }
        ll flag = 0;
        flag += abs(arr[0] - arr[1]) + abs(brr[0] - brr[1]);
        if (arr[0] == arr[2] && arr[1] == arr[2])
        {
            ll mn = min(brr[0], brr[1]);
            ll mx = max(brr[0], brr[1]);
            if (brr[2] > mn && brr[2] < mx)
            {
                flag += 2;
            }
        }
        else if (brr[0] == brr[2] && brr[1] == brr[2])
        {
            ll mn = min(arr[0], arr[1]);
            ll mx = max(arr[0], arr[1]);
            if (arr[2] > mn && arr[2] < mx)
            {
                flag += 2;
            }
        }
        cout << flag << endl;
    }

    return 0;
}