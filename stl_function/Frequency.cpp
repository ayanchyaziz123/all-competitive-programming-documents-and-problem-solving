#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str = "abacbdadbc";
    int freq[26];
    memset(freq, 0, sizeof(freq));

    for (int i = 0; i < str.size(); i++)
    {
        freq[str[i] - 'a']++;
    }

    for (int i = 0; i < str.size(); i++)
    {
        if (freq[str[i] - 'a'] > 0)
        {
            cout<<str[i]<<freq[str[i] - 'a']<<endl;
            freq[str[i] - 'a'] = 0;
        }
    }

    return 0;
}