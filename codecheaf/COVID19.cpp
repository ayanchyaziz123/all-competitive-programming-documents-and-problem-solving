#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T, N;
    cin >> T;
    while (T--)
    {
        cin >> N;
        vector<int> v;
        v.resize(N);
        for (int i = 0; i < N; i++)
        {
            cin >> v[i];
        }
        //Input has come Now My Logic
        int minCase = INT_MIN, maxCase = INT_MAX;
        int cnt = 1;
        for (int j = 1; j < N; j++)
        {
            if (v[j] - v[j - 1] > 1)
                cnt++;
            else
            {
                minCase = max(minCase, cnt);
                maxCase = min(maxCase, cnt);
                cnt = 1;
            }
            if (j == 0)
            {
                minCase = max(minCase, cnt);
                maxCase = min(maxCase, cnt);
            }
        }
        cout << maxCase << " " << minCase << endl;
    }
    return 0;
}