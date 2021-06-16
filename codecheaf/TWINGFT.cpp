#include<bits/stdc++.h>
#define ll long long int
using namespace std;


int main()
{
    ll  tc;
    cin >> tc;
    while(tc--)
    {
        ll n, k;
        cin >> n >> k;
        vector<ll>arr(n);
        for(ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());
        ll p1 = 0, p2 = 0;
        while(k--)
        {
            p1 = p1 + arr.back();
            arr.pop_back();
            p2 = p2 + arr.back();
            arr.pop_back();
        }
        p2 = p2 + arr.back();
        cout << max(p1, p2) << endl;

    }
    

    return 0;
}
