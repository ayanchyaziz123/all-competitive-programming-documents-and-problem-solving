#include <bits/stdc++.h>
#include <algorithm>
#define ll long long int
#define INF 2e18
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ll N, Q;
    cin >> N >> Q;
    ll c = pow(10, 18);
    ll arr[c] = {0};
    for (ll i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    ll query[Q + 1];
    for (ll i = 0; i < Q; i++)
    {
        cin >> query[i];
    }
    sort(arr, arr + N);
    ll c = pow(10, 18);
    ll brr[c];
    ll cnt = 0;
    ll j = 0;
    ll k = 0;

    while (j < query[k])
    {
        for (ll i = 0; i < pow(10, 18); i++)
        {
            if(arr[i] == 0)
            {
                j++;
            }
            
        }

    }

    return 0;
}