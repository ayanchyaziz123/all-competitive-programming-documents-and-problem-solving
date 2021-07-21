#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {1, 4, 6, 8, 10};

    auto it = upper_bound(arr.begin(), arr.end(), 8);
    cout << "Item : " << *it << "------>>>>> Index : " << distance(arr.begin(), it);

    return 0;
}