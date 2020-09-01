#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int ple;
        cin >> ple;
        if (ple > k)
        {
            count += 2;
        }
        else
        {
            count++;
        }
    }
    cout << count << endl;

    return 0;
}