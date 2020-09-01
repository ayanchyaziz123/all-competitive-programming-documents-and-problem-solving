#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t, n, m;
    cin >> t;
    while (t--)
    {
        int unfair = 0;
        cin >> n >> m;
        int temp[n + 1] = {0}, cat;
        while (m--)
        {
            cin >> cat;
            temp[cat]++;
            for (int i = 1; i <= n; i++)
            {
                if (temp[cat] - temp[i] > 1)
                    unfair = 1;
            }
        }
        cout << ((unfair == 1) ? "NO" : "YES") << endl;
    }
    return 0;
}