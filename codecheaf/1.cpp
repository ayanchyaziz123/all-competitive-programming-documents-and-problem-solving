#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        ll n;
        cin>>n;
        vector<ll>v1(n);
        vector<ll>v2(n);

        for (ll i = 0; i < n; i++)
        {
            cin>>v1[i];
        }

        for(ll i = 0; i<n; i++)
        {
            ll l, r, x = 0, y = 0;
            for(l = i; l>=0; l--)
            {
                if(v1[l]>v1[i])
                {
                    x++;
                }

            }
            for(ll r =i; r<n; r++)
            {
                if(v1[r] < v1[i])
                {
                    y++;

                }
            }
            v2[i] = x+y;
        }
        ll min = v2[0];
        ll max = v2[0];

        for (ll i = 0; i < n; i++)
        {
            if(v2[i] < min)
            {
                min = v2[i];
            }
            if(v2[i] > max)
            {
                max = v2[i];
            }
        }
        cout<<min+1<<" "<<max+1<<endl;    
        
    }
    
    
    return 0;
}