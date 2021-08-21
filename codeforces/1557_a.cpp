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
    ll t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<double> arr;
        for (ll i = 0; i < n; i++)
        {
            int p;
            cin >> p;
            arr.push_back(p);
        }
        sort(arr.begin(), arr.end());
        double cnt = 0;
        double gt = 0;
        for (int i = 0; i < n - 1; i++)
        {
            double x = arr[i];
            gt = gt + x;
            cnt = cnt + 1;

        }
        double c = (double)gt / cnt;
        c = c + arr[n - 1];
        printf("%f\n", c);
    }

    return 0;
}