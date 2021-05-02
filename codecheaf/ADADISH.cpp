#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll T;
    cin >> T;
    while (T--)
    {
        ll n, total = 0, rem = 0;
        cin >> n;
        ll a[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        if (n == 1)
        {
            cout << a[0] << endl;
            continue;
        }
        if(n==2){
            cout<<max(a[0], a[1])<<endl;
        }
        sort(a, a+n);
        if(n==3)
        {
            cout<<max((a[0 ]+ a[1]), a[2])<<endl;
        }
        if(n==4){
            if(a[0] + a[1] + a[2] > a[3]){
                int D = a[0]+ a[3];
                int EE = a[1] + a[2];
                cout<<max(D, EE)<<endl;
            }
            else
            {
                cout<<a[3]<<endl;
            }
            
        }
    }
    return 0;
}