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
    ll a, b, c;
    cin >> a >> b >> c;
    ll sum1 = a + b;
    ll sum2 = a + c;
    ll sum3 = b + c;
    if (sum1 >= sum2 && sum1 >= sum3)
    {
        cout << sum1 << endl;
    }
    else if (sum2 >= sum1 && sum2 >= sum3)
    {
        cout << sum2 << endl;
    }
    else
    {
        cout << sum3 << endl;
    }
    return 0;
}