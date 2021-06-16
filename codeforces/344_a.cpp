#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int prev = 0;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int pre;
        cin >> pre;
        if (pre != prev)
        {
            count++;
        }
        prev = pre;
    }
    cout << count << endl;

    return 0;
}