#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr(5, 0);

    arr.push_back(10); //add a element in tail

    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    vector<char> ch = {'a', 'b', 'c'};

    for (int i = 0; i < 3; i++)
    {
        cout << ch[i] << " ";
    }

    return 0;
}