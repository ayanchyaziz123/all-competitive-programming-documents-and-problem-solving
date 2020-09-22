#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        for (int i = n; i >= 1; i--)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}