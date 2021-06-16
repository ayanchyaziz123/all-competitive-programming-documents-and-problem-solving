#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int cnt  = n / 2;
        int cnt2 = n % 2;
        if(cnt2 > 0)
        {
            cout << cnt + 1 << endl;
        }
        else
        {
            cout << cnt << endl;
        }
    }
    



    return 0;
}