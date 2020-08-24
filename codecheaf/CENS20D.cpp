#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    int t;
    cin >> t;
    while (t--)
    {
        vector<int> arr;
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int ple;
            cin >> ple;
            arr.push_back(ple);
        }
        int count = 0;

        for (int i = 0; i < arr.size(); i++)
        {
            for (int j = 0; j < arr.size(); j++)
            {
                if (i < j)
                {
                    int x = arr[i] & arr[j];
                    if (x == arr[i])
                    {
                        count++;
                    }
                }
            }
        }
        cout << count << endl;
    }

    return 0;
}