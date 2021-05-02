#include <bits/stdc++.h>
using namespace std;

int main()
{
    // freopen("input.txt", "r", stdin);
    int a[200][200];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> a[i][j];
        }
    }

    cout << (a[0][0] * a[1][1]) - (a[0][1] * a[1][0]) << endl;

    return 0;
}