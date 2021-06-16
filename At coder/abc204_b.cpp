#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int gt = 0;
    for(int i = 0; i < n; i++)
    {
        int ple = 0;
        cin >> ple;
        if(ple > 10)
        {
            gt += (ple - 10);
        }
    }
    cout << gt << endl;
    return 0;
}