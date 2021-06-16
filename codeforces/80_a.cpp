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
    int n, m;
    cin >> n >> m;

    bool flag = false;
    for (int i = 2; i < m; i++)
    {
        if (m % i == 0)
        {
            flag = true;
            break;
        }
    }

    int x = n + 1;
    bool flag2 = false;
    int y = 0;
    for (int i = x; i <= m; i++)
    {
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                flag2 = true;
                break;
            }
        }
        if (flag2 == false)
        {
            y = i;
            break;
        }

        flag2 = false;
    }

    if (flag == false && y == m)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}