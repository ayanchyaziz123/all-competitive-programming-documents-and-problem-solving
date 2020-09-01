#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int x = n;
        int sum = 0;

        while (n > 0)
        {
            sum = n % 10;
            n = n / 10;
        }
        cout << (sum + (x % 10)) << endl;
    }

    return 0;
}