#include <bits/stdc++.h>
#define ll long long int
#define INF 2e18
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    int arr[n + 1];
    int even = 0;
    int odd = 0;
    int even_pos = 0;
    int odd_pos = 0; 
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] % 2 == 0)
        {
            even++;
            even_pos = i + 1;
        }
        else
        {
            odd++;
            odd_pos = i + 1;
        }
    }

    if (even > odd)
    {
        cout << odd_pos << endl;
    }
    else
    {
        cout << even_pos << endl;
    }

    return 0;
}