#include <bits/stdc++.h>
#define ll long long int
#define INF 2e18
using namespace std;
#define dbg(x) cout << #x << " = " << x << ln
// Ayan's Code
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;
    cin >> n;
    priority_queue<int> pqq;

    while (n > 0)
    {
        n--;
        int a;
        cin >> a;
        pqq.push(-a); /// O ( logn )
    }

    while (pqq.empty() == 0)
    {
        int a = pqq.top(); /// O ( logn ) /// log ( 1e6 ) = 20
        cout << a << " " << -a << endl;
        pqq.pop(); /// O ( logn )
    }

    return 0;
}