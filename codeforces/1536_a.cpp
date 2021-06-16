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
        vector<int> arr;
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            int ple;
            cin >> ple;
            if(ple <0)
            {
                flag = true;
            }
            arr.push_back(ple);
        }
        if(flag)
        {
            cout << "no" << endl;
        }
        else{
            cout << "yes" << endl;
            cout << 101 << endl;
            for(int i = 0; i <=100; i++)
            {
                cout << i << " ";
            }
            cout << endl;
        }
    }
    return 0;
}