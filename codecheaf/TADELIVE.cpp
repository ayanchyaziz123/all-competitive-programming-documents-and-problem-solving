#include <bits/stdc++.h>
using namespace std;

#define LL long long

int main()
{
    ios::sync_with_stdio(0), cin.tie(0);

    LL n, x, y, cnt1 = 0, cnt2 = 0;
    cin >> n >> x >> y;
    LL a[n], b[n];
    pair<LL, int> v[n];
    for (LL &i : a)
        cin >> i;
    for (LL &i : b)
        cin >> i;
    for (int i = 0; i < n; i++)
        v[i] = {abs(a[i] - b[i]), i};
    sort(v, v + n);
    reverse(v, v + n);

    LL ans = 0;
    for (auto j : v)
    {
        int i = j.second;
        if (a[i] >= b[i])
        {
            if (cnt1 < x)
            {
                ans += a[i];
                cnt1++;
            }
            else
            {
                ans += b[i];
                cnt2++;
            }
        }
        else
        {
            if (cnt2 < y)
            {
                ans += b[i];
                cnt2++;
            }
            else
            {
                ans += a[i];
                cnt1++;
            }
        }
    }
    cout << ans;
}