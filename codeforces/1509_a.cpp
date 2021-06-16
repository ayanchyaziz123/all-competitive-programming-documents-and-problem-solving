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
        vector<int>vrr;
        
        for(int i = 0; i < n; i++)
        {
            if(arr[i]%2==0)
            {
                cout << arr[i] << " ";
            }
            else {
                vrr.push_back(arr[i]);

          }

        }
        for(int i = 0; i < vrr.size(); i++)
        {
            cout << vrr[i] << " ";
        }
        cout << endl;
    }

    return 0;
}