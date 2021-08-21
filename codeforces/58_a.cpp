#include <bits/stdc++.h>
using namespace std;
#define N ((int)2e5 + 5)
#define ll long long int
#define INF 2e18
#define MAX_LL ((ll)1e18 + 5)
#define MAX ((int)2e9 + 5)
#define dbg(x) cout << #x << " = " << x << ln
const long long LIMIT = 1e18;
ll MOD = 998244353;
// Ayan's Code
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    string st;
    cin >> st;
    string st2 = "hello";
    vector<char> vc;
    bool taken = false;
    ll i = 0;
    ll j = 0;
    ll ans = 0;
    for (i = 0; i < st.size(); i++)
    {
        if (st[i] == st2[j])
        {
            j++;
            ans++;
        }
    }
    if(ans == 5)
    {
        cout << "YES" << "\n";
    }
    else{
        cout << "NO" << "\n";
    }
   

    return 0;
}