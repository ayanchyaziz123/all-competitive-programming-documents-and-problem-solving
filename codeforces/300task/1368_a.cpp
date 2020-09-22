#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b, n;
        cin >> a >> b >> n;

        ll count = 0;
        while (max(a,b) <= n)
        {
            if( a < b)
            {
                a += b;
            }
            else
            {
                b += a;
            }
            count++;
            
        }
        cout << count << endl;
    }

    return 0;
}