#include <bits/stdc++.h>
using namespace std;

int factorial(int n)
{
    return (n == 1 || n == 0) ? 1 : n * factorial(n - 1);
}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << factorial(n) << endl;
    }

    return 0;
}