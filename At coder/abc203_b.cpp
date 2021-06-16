#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{

    ll N, K;
    cin >> N >> K;
    ll  ans = 0;
    for(ll i = 1; i <= N; i++)
    {
        for(ll j = 1; j<=K; j++)
        {
            ans +=  i * 100 + j;

        }
    }
    cout << ans << endl;
   

    return 0;
}