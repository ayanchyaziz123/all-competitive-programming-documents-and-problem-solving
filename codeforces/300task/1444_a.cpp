#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    //freopen("input.txt", "r", stdin);
    ll t;
    cin >> t;
    while (t--)
    {

        ll p, q;
        bool flags = false;
        cin >> p >> q;
        int x = p;
        for (ll i =  p; i > 1; i--)
        {
            if (p % i == 0 && q % i != 0)
            {
                cout<<i<<endl;
                flags = true;
                break;
            }
            p = p - 1;
            q = q - 1;
        }
        if(flags == false)
        {
            cout<<x<<endl;
        }
    }
    return 0;
}