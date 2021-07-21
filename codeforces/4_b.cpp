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
        int cc = 0;
        cout << "YES" << endl;
        vector<int> vc;
        for (int i = 0; i < d; i++)
        {
            vc.push_back(arr[i]);
            //cout << vc[i] << " ";
            cc += arr[i];
        }

        int j = 0;
        int sz = vc.size();
        mx -= cc;
        totalTime -= cc;

        for (int i = 0; i < d; i++)
        {
            while (arr2[i] != vc[j] && j < sz)
            {
                if (((vc[j] + 1) <= arr2[i]) && ((mx) != 0) && totalTime != 0)
                {
                    vc[j]++;
                    mx--;
                    totalTime--;
                }
                else
                {
                    break;
                }
            }

            if (totalTime <= 0)
            {
                break;
            }
            j++;
        }

        for (int i = 0; i < vc.size(); i++)
        {
            cout << vc[i] << " ";
        }
    }

    return 0;
}