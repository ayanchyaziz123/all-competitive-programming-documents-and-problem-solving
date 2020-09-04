#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main() {
	int t;
	cin >> t;
	while(t--) {
		ll a, b;
		cin >> a >> b;
		ll g = __gcd(a, b);
		cout << g << " " << a/g*b << endl;
	}
}