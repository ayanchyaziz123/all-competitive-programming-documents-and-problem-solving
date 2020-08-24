#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin>>t;
    while (t--)
    {
        int n, k;
        cin>>n>>k;
        vector<int>v;
        int p = 0;
        for (int i = 0; i < n; i++)
        {
            int ple;
            cin>>ple;
            if(ple > k) p = 1;
            v.push_back(ple);
        }

        if(p == 1){cout<<-1<<endl; continue;} 
        int ans = 0;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += v[i];
            if(sum > k)
            {
                ans++;
                sum = v[i];
            }
        }
        cout<<ans+1<<endl;
              
    }
    return 0;
}