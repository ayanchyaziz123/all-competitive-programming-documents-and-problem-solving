#include <bits/stdc++.h>
#define inf 1 << 28
using namespace std;
int n;
int store[200][200], dp[200][200];

template <typename M>
M banana(M i, M j)
{
    if (i >= 0 && i < 2 * n - 1 && j >= 0 && j < n)
    {
        if (dp[i][j] != -1)
            return dp[i][j];
        if (store[i][j] == 0)
            return 0;
        M res = -inf;
        res = max(res, banana(i + 1, j) + store[i][j]);
        if (i < n - 1)
            res = max(res, banana(i + 1, j + 1) + store[i][j]);
        else
            res = max(res, banana(i + 1, j - 1) + store[i][j]);

        dp[i][j] = res;
        return dp[i][j];
    }
    else
        return 0;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int test, tc = 1;
    cin >> test;
    while (test--)
    {
        memset(dp, -1, sizeof(dp));
        memset(store, 0, sizeof(store));
        cin >> n;
        int a;
        for (int i = 0; i < 2 * n - 1; i++)
        {
            if (i < n)
                for (int j = 0; j <= i; j++)
                    cin >> store[i][j];
            else
                for (int j = 0; j < 2 * n - i - 1; j++)
                    cin >> store[i][j];
        }
        int res = banana(0, 0);
        cout << "Case " << tc++ << ": " << res << endl;
    }
    return 0;
}