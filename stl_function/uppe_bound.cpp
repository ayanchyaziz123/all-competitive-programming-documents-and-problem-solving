#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {1, 2, 4, 4, 4, 6, 8, 10, 10, 10, 12, 13};

    auto it = upper_bound(arr.begin(), arr.end(), 10);
    auto x = (it - arr.begin());
    cout << x << endl;
    vector<int>::iterator itt;
    itt = lower_bound(arr.begin(), arr.end(), 4);
    cout << distance(arr.begin(), itt) << endl;

    return 0;
}