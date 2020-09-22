#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("ADAMATI.txt", "r", stdin);
    int t;
    cin >> t;
    while (t--)
    {
        int n;

        cin >> n;
        int A[n][n];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> A[i][j];
            }
        }

        int C[n][n];


        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                C[i][j] = A[i - 1][n + j];

        int B[n][n];

        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                B[i][j] = C[j][i];




        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << C[i][j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}