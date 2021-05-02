#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[] = {1, 2, 3, 2, 6, 1, 3};
    unordered_map<int, int> mp;

    printf("Array frequncy : ");
    printf("\n");

    for (int i = 0; i < 7; i++)
    {
        mp[a[i]]++;
    }

    for (auto it : mp)
    {
        cout << it.first << " ->" << it.second << endl;
    }
}