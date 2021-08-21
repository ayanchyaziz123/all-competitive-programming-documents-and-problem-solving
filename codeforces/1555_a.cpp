#include <bits/stdc++.h>
#define ll long long int
#define INF 2e18
using namespace std;
#define dbg(x) cout << #x << " = " << x << ln
// Ayan's Code
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
        ll n;
        cin >> n;
        ll flag = 0;
        if (n < 7)
        {
            flag = 15;
        }
        else
        {
            if (n % 2 != 0){
                n++;
            }
            flag = (n * 5) / 2;
        }
        cout << flag << endl;
    }
    return 0;
}