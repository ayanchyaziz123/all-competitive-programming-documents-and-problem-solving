#include <bits/stdc++.h>
#include <iostream>
#include <sstream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        string arr;
        cin >> n >> m;
        cin >> arr;


        for (int i = 0; i < m; i++)
        {
            for (int j = 1; j < n - 1; j++)
            {
                if (arr[0] == '0' && arr[1] == '1')
                {
                    arr[0] = '1';
                }
                if (arr[n - 1] == '1' && arr[n - 2] == '0')
                {
                    arr[n - 2] = '1';
                }
                if (arr[j] == '1' && arr[j - 1] == '0')
                {
                    arr[j - 1] == '1';
                }
                if (arr[j] == '1' && arr[j + 1] == '0')
                {
                    arr[j + 1] == '1';
                }
            }
        }
       cout << arr << endl;
    
    }

    return 0;
}