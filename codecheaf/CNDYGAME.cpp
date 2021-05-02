#include <bits/stdc++.h>
#define mod 1000000007
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        int a[n];
        int l = 0, t = -1;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            if(a[i] == 1)
            {
                if(i==0)
                {
                    l = 1;
                }
                else if(i!=n-1)
                {
                    l = 2;
                    t = i;
                }
            }
        }
        if(l == 1)
        {
            int q;
            cin>>q;
            while(q--){
                long long int r;
                cin>>r;
                int ans;
                if(r%n==0)
                {
                    ans = (r/n) % mod;
                }
                else
                {
                    if(r%n==1 && r> n)
                    {
                        ans = (r/n) % mod;
                    }
                }
                cout<<ans<<endl;
                
            }

        }
    }

    return 0;
}