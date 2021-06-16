#include <bits/stdc++.h>
#define ll long long int
#define INF 2e18
using namespace std;
int main()
{

    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int mx = *max_element(arr.begin(), arr.end());
        int mn = *min_element(arr.begin(), arr.end());
        int f_count = 0;
        int s_count = 0;
        bool first_flag = 0;
        bool second_flag = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == mn)
            {
                first_flag = true;
                f_count++;
            }
            if (arr[i] == mx)
            {
                second_flag = true;
                f_count++;
            }
            if (first_flag && second_flag)
            {
                break;
            }
            f_count++;
        }
        first_flag = false;
        second_flag = false;
        for (int i = n - 1; i >= 0; i--)
        {
            if (arr[i] == mn)
            {
                first_flag = true;
                s_count++;
            }
            if (arr[i] == mx)
            {
                second_flag = true;
                s_count++;
            }
            if (first_flag && second_flag)
            {
                break;
            }
            s_count++;
        }
        int t_count = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == mx || arr[i] == mn)
            {
                t_count++;
                break;
            }
            t_count++;
        }

        for (int i = n; i >= 0; i--)
        {
            if (arr[i] == mx || arr[i] == mn)
            {
                t_count++;
                break;
            }
            t_count++;
        }

        cout << min(t_count, min(f_count, s_count)) - 1 << endl;
    }

    return 0;
}