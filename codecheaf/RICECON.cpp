#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int P, K;
        cin >> P >> K;
        int sum = 0;
        for (int i = 0; i < P; i++)
        {
            int ple;
            cin >> ple;
            if (ple > K)
            {
                int get = ple - K;
                sum += get;
            }
        }
        cout << sum << endl;
    }

    return 0;
}