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
    int n;
    int a, b;
    cin >> n;
    int arr[n + 1];
    for (int i = 0; i < n - 1; i++)
    {
        cin >> arr[i];
    }

    cin >> a >> b;
    int tot = 0;

    for (int i = a - 1; i < b - 1; i++)
    {
        tot += arr[i];
    }
    cout << tot << endl;

    return 0;
}