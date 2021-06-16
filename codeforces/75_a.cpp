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
    ll n, m;
    cin >> m;
    cin >> n;
    ll sm = m + n;
    ll rev_m = 0;
    ll rev_n = 0;
    ll rev_sum = 0;
    ll remainder_sum;
    ll remainder_n;
    ll remainder_m;
    while (m != 0)
    {
        remainder_m = m % 10;
        if (remainder_m != 0)
        {
            rev_m = rev_m * 10 + remainder_m;
        }
        m /= 10;
    }

    while (n != 0)
    {
        remainder_n = n % 10;
        if (remainder_n != 0)
        {
            rev_n = rev_n * 10 + remainder_n;
        }
        n /= 10;
    }

    while (sm != 0)
    {
        remainder_sum = sm % 10;
        if (remainder_sum != 0)
        {
            rev_sum = rev_sum * 10 + remainder_sum;
        }
        sm /= 10;
    }

    ll m_remainder;
    ll ans1 = 0;

    while (rev_m != 0)
    {
        m_remainder = rev_m % 10;
        ans1 = ans1 * 10 + m_remainder;
        rev_m /= 10;
    }

    ll n_remainder;
    ll ans2 = 0;
    while (rev_n != 0)
    {
        n_remainder = rev_n % 10;
        ans2 = ans2 * 10 + n_remainder;
        rev_n /= 10;
    }

    ll s_remainder;
    ll ans3 = 0;

    while (rev_sum != 0)
    {
        s_remainder = rev_sum % 10;
        ans3 = ans3 * 10 + s_remainder;
        rev_sum /= 10;
    }

    if (ans1 + ans2 == ans3)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}