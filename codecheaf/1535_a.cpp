#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int p1, p2, p3, p4;
        cin >> p1 >> p2 >> p3 >> p4;
        int mn = min(p1, p2);
        int mn2 = min(p3, p4);
        int mx = max(p1, p2);
        int mx2 = max(p3, p4);
        if (mn2 > mx || mn > mx2)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}