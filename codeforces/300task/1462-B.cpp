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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        bool flag = false;
        for (int i = 0; i <= 4; i++)
        {
            string t1 = s.substr(0, i);
            string t2 = s.substr(n - 4 + i);
            string ans = t1 + t2;
            if (ans == "2020")
            {
                cout << "YES"
                     << "\n";
                flag = true;
                break;
            }
        }
        if (flag == false)
        {
            cout << "NO"
                 << "\n";
        }
    }

    return 0;
}