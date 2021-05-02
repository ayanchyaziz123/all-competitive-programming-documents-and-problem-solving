#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    int t;
    cin >> t;
    while (t--)
    {
        string g, s;
        cin >> g >> s;
        int count = 0;
        for (int i = 0; i < s.length(); i++)
        {
            for (int j = 0; j < g.length(); j++)
            {
                if (s[i] == g[j])
                {
                    count++;
                    break;
                }
            }
        }
        cout << count << "\n";
    }
    return 0;
}