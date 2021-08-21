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
vector<string> vc;

bool isPowerOfTwo(ll n)
{
    if (n == 0)
        return false;

    return (ceil(log2(n)) == floor(log2(n)));
}

void printSubsequence(string input, string output)
{
    if (input.empty())
    {
        //cout << output << endl;
        vc.push_back(output);
        return;
    }
    printSubsequence(input.substr(1), output + input[0]);
    printSubsequence(input.substr(1), output);
}

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
        ll x;
        cin >> x;
        string str = to_string(x);
        string output = "";
        string input = str;
        ll len_1 = 0;
        len_1 = str.size();
        if (len_1 == 1)
        {
            cout << 1 << endl;
            continue;
        }
        printSubsequence(input, output);
        sort(vc.begin(), vc.end(), greater<string>());
        ll mn = MAX_LL;
        ll flag = false;
        ll cnt = 0;
        for (ll i = 0; i < vc.size(); i++)
        {
            string yy = vc[i];
            stringstream geek(yy);
            ll z = 0;
            geek >> z;
            if (isPowerOfTwo(z))
            {
                cnt++;
                ll len_2 = 0;
                len_2 = vc[i].size();
                // cout << len_2 << endl;
                ll ss = 0;
                //cout << len_1 << " " << len_2 << endl;
                ss = len_1 - len_2;
                mn = min(ss, mn);
                // cout << mn << endl;

                flag = true;
            }
        }
        //cout << endl;
        ll n_mn;
        vector<ll> vc2;
        ll gt = 1;
        while (gt < x)
        {
            gt = gt * 2;
        }
        gt *= 2;
        //gt *= 2;
        //cout << gt << endl;
        string h = to_string(gt);
        ll len_3 = h.size();
        ll ans = len_3 - len_1;
        cout << min(mn, ans) + 1;

        vc.clear();
    }
    return 0;
}