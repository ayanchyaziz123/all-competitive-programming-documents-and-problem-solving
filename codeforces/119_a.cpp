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
    int a, b, n;
    cin >> a >> b >> n;
    bool flag = false;
    while (n > 0)
    {
        int k = __gcd(a, n);
        n = n - k;
        flag = true;
        if (n <= 0)
        {
            break;
        }
        int l = __gcd(b, n);
        n = n - l;
        flag = false;
        if (n <= 0)
        {
            break;
        }
    }

    if (flag)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << 1 << endl;
    }

    return 0;
}