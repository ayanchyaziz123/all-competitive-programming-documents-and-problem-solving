#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long int t;
    cin>>t;
    while(t--){
        long long int n,k;
        cin>>n>>k;
        vector <long long int> ve(n);
        for(int i=0;i<n;i++) cin>>ve[i];
        sort(ve.begin(),ve.end(),greater<long long int>());
        if(k==n) cout<<n<<"\n";
        else{
        for(int i=k;i<n;i++)
        {
            if(ve[i]==ve[k-1]) k++;
            else break;
            
        }
        cout<<k<<"\n";
        }
    }
}
