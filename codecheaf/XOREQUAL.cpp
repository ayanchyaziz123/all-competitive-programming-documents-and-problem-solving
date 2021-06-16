#include <iostream>

#include<bits/stdc++.h>

using namespace std;

#define ll long long int

#define MODVAL 1000000007

ll get(ll n, ll a, ll beta){

    ll powVal = 1;

    n = n % beta;

    if (n == 0) return 0;

    while (a > 0){

        if(a&1)

            powVal = (powVal*n)%beta;

        a >>= 1;

        n = (n*n)%beta;

    }

    return powVal;

}

int main() {

    int t;

    cin>>t;

    while(t--){

        ll n;

        cin>>n;

        ll ans = get(2,n-1, MODVAL);

        cout<<ans<<endl;

    }

    return 0;

}
