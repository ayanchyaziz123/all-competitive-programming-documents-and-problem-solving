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
    int test_case;
    cin >> test_case;
    while (test_case--)
    {
        int x, y;
        cin >> x >> y;
        string st;
        cin >> st;
        int ans_u = 0;
        int ans_d = 0;
        int ans_r = 0;
        int ans_l = 0;
        int i = 0;
        bool flag = false;
        while (i < st.size())
        {
            if (st[i] == 'U')
            {
                ans_u = ans_u + 1;
            }
            if (st[i] == 'D')
            {
                ans_d = ans_d - 1;
            }
            if (st[i] == 'R')
            {
                ans_r = ans_r + 1;
            }
            if (st[i] == 'L')
            {
                ans_l = ans_l - 1;
            }

            if ((ans_r == x || ans_l ==x) && (ans_u == y || ans_d == y))
            {
                cout << "YES" << endl;
                flag = true;
                break;
            }
            i++;
        }
        if (!flag)
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}