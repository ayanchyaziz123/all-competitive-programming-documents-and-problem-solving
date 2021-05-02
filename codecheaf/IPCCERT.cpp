#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    //freopen("input.txt", "r", stdin);

    ll N, M, K;
    cin >> N >> M >> K;
    ll certificate = 0;
    while (N--)
    {
        ll arr[K + 1];
        for (int i = 0; i < K + 1; i++)
        {
            cin >> arr[i];
        }
        ll sum = 0;
        for (int i = 0; i < K; i++)
        {
            sum += arr[i];
        }

        int x = arr[K];

        if ((x <= 10) && (M <= sum))
        {
            certificate++;
        }
    }
    cout << certificate << endl;

    return 0;
}