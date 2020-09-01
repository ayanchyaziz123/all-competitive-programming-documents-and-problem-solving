#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        string put;
        string first;
        string second;
        cin >> str;
        put = str;

        int n = str.size();
        first[n - 1] = str[0];

        for (int i = 0; i < str.size() - 2; i++)
        {
            first[i] = str[i + 1];
        }
        cout << first << endl;
        second[0] = str[n - 1];
        for (int i = 1; i < str.size(); i++)
        {
            first[i] = str[i];
        }
        cout << second << endl;
    }

    return 0;
}