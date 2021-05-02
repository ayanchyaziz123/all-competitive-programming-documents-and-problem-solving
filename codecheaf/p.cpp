#include <bits/stdc++.h>
#define ll long long int
#define INF 2e18
using namespace std;
#define N 1000000
bool seive[N + 1];

void solve()
{
    memset(seive, true, (sizeof(seive[0]) * N + 1));
    seive[0] = false;
    seive[1] = true;
    for (ll i = 2; i * i < N + 1; i++)
    {
        if (seive[i] == true)
        {
            for (ll j = i * i; j < N + 1; j += i)
            {
                seive[j] = false;
            }
        }
    }
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        solve();

        ll temp = 0;
        ll primen[N + 1] = {'\0'};

        for (ll i = 2; i < N + 1; i++)
        {
            if (seive[i])
            {
                temp++;
            }
            primen[i] = temp;
        }

        if (primen[n] > k)
        {
            cout << "Divyam" << endl;
        }
        else
        {
            cout << "Chef" << endl;
        }
    }
}