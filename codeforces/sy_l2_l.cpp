#include <bits/stdc++.h>
using namespace std;
double eps = 1e-12;
#define ll long long int
#define INF 2e18
#define max_in_ll 372036854775808
#define min_in_ll -372036854775808
#define MAX ((int)2e9 + 5)
#define dbg(x) cout << #x << " = " << x << ln
ll MOD = 998244353;
// Ayan's Code

int leftmost(vector<int> &arr, int val)
{
    int L = 0, R = arr.size() - 1;
    while (L < R)
    {
        int mid = (L + R) / 2;
        if (arr[mid] < val)
            L = mid + 1;
        else
            R = mid;
    }
    return L;
}

int rightmost(vector<int> &arr, int val)
{
    int L = 0, R = arr.size() - 1;
    while (L < R)
    {
        int mid = (L + R + 1) / 2;

        if (arr[mid] > val)
            R = mid - 1;
        else
            L = mid;
    }
    return L;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t, caseno = 0;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        vector<int> arr(n + 2);
        for (int i = 1; i <= n; i++)
            cin >> arr[i];
        arr[0] = -MAX;
        arr[n + 1] = MAX;
        sort(arr.begin(), arr.end());
        cout << "Case " << ++caseno << ":\n";
        while (q--)
        {
            int L, R;
            cin >> L >> R;
            cout << rightmost(arr, R) - leftmost(arr, L) + 1 << endl;
        }
    }

    return 0;
}