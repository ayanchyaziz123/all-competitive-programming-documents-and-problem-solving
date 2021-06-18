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
    int d, totalTime;
    cin >> d >> totalTime;
    int arr[d + 1];
    int arr2[d + 1];
    int mn = 0;
    int mx = 0;
    for (int i = 0; i < d; i++)
    {
        cin >> arr[i] >> arr2[i];
        mn += arr[i];
        mx += arr2[i];
    }
    int t = totalTime;
    int sum = 0;
    if (mn > totalTime || totalTime > mx)
    {
        cout << "NO" << endl;
    }
    
    else
    {
        cout << "YES" << endl;
        for (int i = 0; i < d; i++)
        {

            int ans = 0;
            int j = arr[i];
            while (j <= arr2[i] && j <= t && 1 < totalTime)
            {
                ans = j;
                j++;
                totalTime--;
                if (totalTime == 0)
                {
                    break;
                }
            }
            sum += ans;
            cout << ans << " ";
        }
        cout << endl;
        cout << sum;
    }

    return 0;
}