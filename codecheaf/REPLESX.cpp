#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007

int findIndex(int a[], int N, int X, int p)
{
    int min = 100000000, minp = 0;
    for (int i = 0; i < N; i++)
    {
        if (a[i] == X)
        {
            if (abs(p - i) < min)
            {
                min = abs(p - i);
                minp = i;
            }
        }
    }

    return minp;
}
void subMain()
{
    int N, X, p, k;
    cin >> N >> X >> p >> k;
    int a[N];
    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
    }
    sort(a, a + N);
    int index = findIndex(a, N, X, p);
    int count = 0;
    if (a[index] != X)
    {
        a[k - 1] = X;
        sort(a, a + N);
        count++;
    }
    if (a[p - 1] == X)
    {
        cout << 0 + count << endl;
        return;
    }
    if (p < k && a[p - 1] < X)
    {
        cout << -1 << endl;
        return;
    }
    if (p > k && a[p - 1] > X)
    {
        cout << -1 << endl;
        return;
    }
    index = findIndex(a, N, X, p) + 1;
    cout << abs(p - index) + count << endl;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        subMain();
    }
}