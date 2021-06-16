#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        vector<int> arr(2*n);
        for (int i = 0; i < 2 * n; i++)
        {
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());
        int cnt = 0;
        int i = 0;
        int j = (2*n) - 1;
        while (i <= j)
        {
            if (cnt % 2 == 0)
            {
                cout << arr[j] << " ";
                j--;
            }
            else
            {
                cout << arr[i] << " ";
                i++;
            }
            cnt++;
        }
    }

    return 0;
}