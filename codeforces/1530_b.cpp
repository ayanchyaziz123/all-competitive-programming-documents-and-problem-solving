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
        ll h, w;
        cin >> h >> w;
        ll arr[50][50];
        for (ll i = 0; i < h; i++)
        {
            for (ll j = 0; j < w; j++)
            {
                if (i == 0 && j == 0)
                {
                    arr[i][j] = 1;
                }
                else if (i == h - 1 && j == 0)
                {
                    arr[i][j] = 1;
                }
                else if (i == 0 && j == w - 1)
                {
                    arr[i][j] = 1;
                }
                else if (i == h - 1 && j == w - 1)
                {
                    arr[i][j] = 1;
                }
                else
                {
                    arr[i][j] = 0;
                }
            }
        }
        for (ll i = 0; i < h; i++)
        {
            for (ll j = 0; j < w; j++)
            {
                if (i == 0 && j == 0)
                {
                    while (j < w)
                    {
                        j++;
                        if (arr[i][j] == 0 && arr[i][j + 1] == 0 && arr[i][j + 2] == 0)
                        {
                            j++;
                            arr[i][j] = 1;
                            j++;
                        }
                    }
                }
                else if (i == h - 1 && j == 0)
                {
                    while (j < w)
                    {
                        j++;
                        if (arr[i][j] == 0 && arr[i][j + 1] == 0 && arr[i][j + 2] == 0)
                        {
                            j++;
                            arr[i][j] = 1;
                            j++;
                        }
                    }
                }
                else if ((arr[i - 1][j] == 0) && (arr[i][j - 1] == 0) && (arr[i + 1][j] == 0) && (arr[i][j + 1] == 0) && (arr[i - 1][j - 1] == 0) && (arr[i - 1][j + 1] == 0) && (arr[i + 1][j - 1] == 0) && (arr[i + 1][j + 1] == 0))
                {
                    arr[i][j] = 1;
                }
            }
        }

        arr[2][w - 1] = 1;
        arr[2][w - 2] = 0;
        if (arr[3][w - 1] == 1)
        {
            arr[3][w - 1] = 0;
        }

        for (ll i = 0; i < h; i++)
        {
            for (ll j = 0; j < w; j++)
            {
                cout << arr[i][j];
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}