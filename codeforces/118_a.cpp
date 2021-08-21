#include <bits/stdc++.h>
using namespace std;
double eps = 1e-12;
#define ll long long int
#define INF 2e18
#define max_in_ll 372036854775808
#define min_in_ll -372036854775808
#define dbg(x) cout << #x << " = " << x << ln
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
    transform(st.begin(), st.end(), st.begin(), ::tolower);
    //cout << st << endl;
    string ans = "";
    ll cnt = 0;
    for (ll i = 0; i < st.size(); i++)
    {
        if (st[i] == 'a' || st[i] == 'e' || st[i] == 'i' || st[i] == 'o' || st[i] == 'u' || st[i] == 'y')
        {
            //ans[i] = st[i - 1];
            //ans += '.';
            //cout << "hello" << endl;
            continue;
        }
        else
        {
            ans += st[i];
            //ans= st[i];
            // cout << "hello2" << endl;
        }
    }
    for (ll i = 0; i < ans.size(); i++)
    {
        cout << '.' << ans[i];
    }
    cout << endl;
    return 0;
}