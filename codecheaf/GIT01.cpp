#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, i, j, sum1 = 0, sum2 = 0;
        cin >> n >> m;
        char a[n][m];
        for (i = 0; i < n; i++)
            for (j = 0; j < m; j++)
                cin >> a[i][j];
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < m; j++)
            {
                if ((i + j) % 2 == 0)
                {
                    if (a[i][j] == 'R')
                        sum2 += 5;
                    else
                        sum1 += 3;
                }
                else
                {
                    if (a[i][j] == 'R')
                        sum1 += 5;
                    else
                        sum2 += 3;
                }
            }
        }
        cout << min(sum1, sum2) << "\n";
    }
    return 0;
}