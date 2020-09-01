#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        vector<int> v;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int ple;
            cin >> ple;
            v.push_back(ple);
        }
        int w2 = 0, w1 = 0;

        for (int i = 0; i < v.size(); i++)
        {
            if (i == 0 || (i % 2 == 1 && i != 1))
            {
                w1 += v[i];
            }
            else
            {
                w2 += v[i];
            }
        }

        if (w2 < w1)
        {
            cout << "first" << endl;
        }
        else if (w1 < w2)
        {
            cout << "second" << endl;
        }
        else
        {
            cout << "draw" << endl;
        }
    }

    return 0;
}