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
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, L, R;
        cin >> n >> L >> R;
        int arr[n + 1];
        vector<int>brr;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if(arr[i] < R)
            {
                brr.push_back(arr[i]);
            }
        }
        int cnt = 0;
        for (int i = 0; i < brr.size(); i++)
        {
            for (int j = i + 1; j < brr.size(); j++)
            {
                if ((L <= brr[i] + brr[j]) && (brr[i] + brr[j] <= R))
                {
                    cnt++;
                }
            }
        }
        cout << cnt << endl;
    }

    return 0;
}