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
    ll tc;
    cin >> tc;
    while (tc--)
    {
        int n, m;
        cin >> n >> m;
        char arr[n + 1][m + 1];

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> arr[i][j];
            }
        }

        for(int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (arr[i][j] == 'R' || arr[i][j] == 'W')
                {
                    if (arr[i][j+1] == '.')
                    {
                        int x = i;
                        if(arr[i] != )


                    }
                }
            }
        }

        
    }

    return 0;
}