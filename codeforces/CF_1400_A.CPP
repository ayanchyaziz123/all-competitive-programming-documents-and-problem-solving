#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
	
	ll t;
	cin>>t;
 
	while(t--){
		ll n;
		cin>>n;
		string s;
		cin>>s;
 
		for(ll i=0;i<n;i++){
            cout<<s[n-1];
        } 
		cout<<endl;
	}
 
	return 0;
}