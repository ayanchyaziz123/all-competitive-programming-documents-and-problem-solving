#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m, n, i, j, ct;
        cin >> m >> n;
        for (i = m; i <= n; i++)
        {
            ct = 0;
            for (j = 2; j <= sqrt(i); j++)
            {
                if (i % j == 0)
                {
                    ct++;
                    break;
                }
            }
            if (ct == 0 && i != 1)
                cout << i << "\n";
        }
        cout << endl;
    }
    return 0;
}
