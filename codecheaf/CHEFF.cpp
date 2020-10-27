#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while (t--)
    {
        ll n, k;
        cin>>n>>k;
        ll arr[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i]; 
        }
        ll i;
        ll t = 0;
        for(i = 0; i<n; i++)
        {
           
            if(arr[i] >= k)
            {
                t++;
                arr[i+1] += (arr[i] - k);

            }
            
            if(arr[i] < k){
                break;
            }
        }
        if(i == n)
        {
            t +=((arr[n-1] - k) / k);
        }
        cout<<t+1<<endl;
    }
    
}