#include <bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("input.txt", "r", stdin);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int x = 4 * n;
        while (n--)
        {
            cout << x << " ";
            x -= 2;
        }
        cout << endl;
    }

    return 0;
}

gfg