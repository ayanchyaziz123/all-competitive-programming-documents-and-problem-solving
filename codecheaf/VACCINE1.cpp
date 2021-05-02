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
    int d1, v1, d2, v2;
    int p;
    cin >> d1 >> v1 >> d2 >> v2 >> p;
    int cmp_1_day = d1;
    int cmp_2_day = d2;
    int day = 0;
    if (d1 >= d2)
    {
        day = d2;
        while (p > 0)
        {
            if (day == d1)
            {
                p = p - v1;
                d1++;
            }
            p = p - v2;
            day++;
        }
        cout << day - 1 << endl;
    }
    else
    {
        day = d1;
        while (p >= 0)
        {
            if (day == d2)
            {
                p = p - v2;
                d2++;
            }
            p = p - v1;
            day++;
        }
        cout << day - 1 << endl;
    }

    return 0;
}