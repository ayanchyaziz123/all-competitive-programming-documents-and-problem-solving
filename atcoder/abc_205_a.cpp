#include <bits/stdc++.h>
#define ll long long int
#define INF 2e18
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int a, b;
    cin >> a >> b;
    float c = (float)b;
    float d = (float)a;
    float s = c / 100;
    cout << d * s << endl;

    return 0;
}