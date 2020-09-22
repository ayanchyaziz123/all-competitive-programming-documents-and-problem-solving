#include<bits/stdc++.h>
using namespace std;
 
#define ll long long int
#define pb push_back
#define mp make_pair
#define all(x) x.begin(),x.end()
 
int main()
{
	
	ll t;
	cin>>t;
 
	read:
	while(t--){
		ll n;
		cin>>n;
		ll a[n];
		for(ll i=0;i<n;i++) cin>>a[i];
		
		for(ll i=1;i<n;i++){
			if(a[i]!=a[i-1]){
				cout<<1<<endl;
				goto read;
			}
		}
		cout<<n<<endl;
	}
 
	return 0;
}