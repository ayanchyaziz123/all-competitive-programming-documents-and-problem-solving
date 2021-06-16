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
    int test_case;
    cin >> test_case;
    while (test_case--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);

        int mn = 2147483647;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            mn = min(arr[i], mn);
        }

        int winer = 0;
        for (int i = 0; i < n; i++)
        {
            if(arr[i] != mn)
            {
                winer++;
            }
        }
        cout << winer << endl;
    }

    return 0;
}