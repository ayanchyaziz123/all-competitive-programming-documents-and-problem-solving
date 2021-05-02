#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, i, j = 0, k, m = 0;
        cin >> n >> k;
        string s;
        cin >> s;
        int p = k + 1, l, count = 0;
        queue<int> mag;
        queue<int> iron;
        for (i = 0; i < n; i++)
        {
            if (s[i] == 'M')
                mag.push(i);
            if (s[i] == 'I')
                iron.push(i);
            if (s[i] == 'X' || i == n - 1)
            {
                int l, r, sheet = 0, q;
                while (!mag.empty() && !iron.empty())
                {
                    sheet = 0;
                    l = min(mag.front(), iron.front());
                    r = max(mag.front(), iron.front());
                    for (q = l; q <= r; q++)
                    {
                        if (s[q] == ':')
                        {
                            sheet++;
                        }
                    }

                    if ((p - abs(l - r) - sheet) > 0)
                    {
                        count++;
                        mag.pop();
                        iron.pop();
                    }
                    else if(mag.front() < iron.front())
                    {
                        mag.pop();
                    }
                    else
                    {
                        iron.pop();
                    }
                    

                }
                while (!mag.empty())
                {
                    mag.pop();
                }
                while (!iron.empty())
                {
                    iron.pop();
                }
                
                
            }
        }
        cout<<count<<endl;
    }
    return 0;
}