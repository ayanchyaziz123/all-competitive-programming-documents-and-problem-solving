#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n;
        int max = 0;
        cin >> n;
        int arr[n + 1];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] > max)
            {
                max = arr[i];
            }
        }
        sort(arr, arr + n);
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (abs(arr[i] - arr[i + 1]) <= max)
            {
                count++;
            }
        }
        cout << count + 1 << endl;
    }
    return 0;
}