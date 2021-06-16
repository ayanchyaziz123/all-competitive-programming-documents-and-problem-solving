#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n + 1];
        int avg = 0;
        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
        }
        sort(arr, arr+n);
        avg = arr[0];
        int cnt = 1;
        for(int i = 1; i < n; i++)
        {
            if(avg==arr[i]){
                cnt++;
            }
            else{
                break;
            }
        }
        cout << n - cnt << endl;
        
    }

    return 0;
}