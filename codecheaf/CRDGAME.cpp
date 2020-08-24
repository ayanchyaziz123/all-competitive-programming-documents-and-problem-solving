#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int pts1 = 0;
        int pts2 = 0;
        for (int i = 0; i < n; i++)
        {
            int sum1 = 0;
            int sum2 = 0;
            int ple1, ple2;
            cin >> ple1 >> ple2;
            if (ple1 / 10 > 0)
            {
                while (ple1 > 0)
                {
                    sum1 += ple1 % 10;
                    ple1 = ple1 / 10;
                }
            }
            else
            {
                sum1 = ple1;
            }

            if (ple2 / 10 > 0)
            {
                while (ple2 > 0)
                {
                    sum2 += ple2 % 10;
                    ple2 = ple2 / 10;
                }
            }
            else
            {
                sum2 = ple2;
            }

            if (sum1 > sum2)
            {
                pts1++;
            }
            else if (sum1 < sum2)
            {
                pts2++;
            }
            else
            {
                pts2++;
                pts1++;
            }
            
        }
        if (pts1 > pts2)
        {
            cout << 0 << " " << pts1 << endl;
        }
        else if (pts1 < pts2)
        {
            cout << 1 << " " << pts2 << endl;
        }
        else
        {
            cout << 2 << " " << pts1 << endl;
        }
    }


    return 0;
}