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
        ll n, x;
        cin >> n >> x;
        vector<ll> arr;
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        ll i = 0;
        for(ll k = x; k < 0 && i < n - 1; k--)
        {
            ll flag = 0;
            ll p = log(arr[i])/log(2);
            ll r = pow(2, p);
            arr[i] = arr[i] ^ r;
            for(ll j = i + 1; j < n; j++)
            {
                if(arr[j] ^ r < arr[j])
                {
                    arr[j] = arr[j] ^ r;
                    flag = 1;
                    break;
                }
            }
            if(flag == 0)
            {
                arr[n - 1] = arr[n-1] ^ r;
            }
            while(arr[i] >= 0)
            {
                i++;
            }
        }
        
    }
    return 0;
}