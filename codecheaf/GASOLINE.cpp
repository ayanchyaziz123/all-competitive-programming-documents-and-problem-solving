#include <bits/stdc++.h>
#define ll long long int
#define INF 2e18
using namespace std;

int main()
{

    ll t = 1;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        lli f[n], c[n];
        scanarr(f, n);
        scanarr(c, n);
        vector<pair<lli, lli>> vp;
        loop(i, n)
        {
            vp.pb({c[i], f[i]});
        }
        sort(all(vp));
        lli rem = n;
        lli ans = 0;
        lli i = 0;
        while (i < n)
        {
            lli fuel = vp[i].S; //max fuel we can fill up for cuureent car
            lli cst = vp[i].F;  // per L fuel cost
            if (fuel)           // fuel must be there
            {
                if (fuel <= rem) // if fuel is less than remaining distance then fill the current car completely
                {
                    rem -= fuel;
                    ans += (fuel * cst);
                }
                else
                {
                    ans += (rem * cst); // if fuel is more then remaining distance the fill only required petrol
                    // suppose car has 10L fuel capacity  and we required only 2 litre
                    // then why we need to fill with 10L , fill only 3L
                    rem = 0;
                    break;
                }
            }
            i++;
            if (rem == 0)
                break;
        }

        print(ans);
    }
    return 0;
}