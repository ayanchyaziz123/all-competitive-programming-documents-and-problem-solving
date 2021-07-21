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
    ll n, a, x, y;
    cin >> n >> a >> x >> y;
    ll sum = 0;
    if (n > a)
    {
        sum = a * x;
        n = n - a;
        sum += n * y;
        cout << sum << endl;
    }
    else{
        cout << n * x << endl;
    }

    return 0;
}