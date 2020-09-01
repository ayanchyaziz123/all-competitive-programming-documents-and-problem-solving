#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<int> v;
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int ple;
            cin >> ple;
            v.push_back(ple);
        }
        int c = 0;
        int m = 0;

        for (int i = 0; i < v.size(); i++)
        {
            if (v[i] % 2 == 0)
            {
                c++;
            }
            else
            {
                m++;
            }
        }

        if (c != 0)
            cout << "NO" << endl;
        else if (m != 0 && c == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}