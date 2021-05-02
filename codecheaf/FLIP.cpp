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
        string s1, s2;
        cin >> s1 >> s2;
        ll ans = 0;
        ll n = s1.size();
        for (ll i = 0; i < n; i++)
        {
            if (s1[i] == s2[i])
                continue;
            int p = i;
            while (p < n && (s1[p] != s2[p]))
            {
                s1[p] = s2[p];
                p = p + 2;
            }
            ans++;
        }
        cout << ans << endl;
    }

    return 0;
}