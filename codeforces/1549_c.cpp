#include <bits/stdc++.h>
#define ll long long int
#define INF 2e18
using namespace std;
#define dbg(x) cout << #x << " = " << x << ln
// Ayan's Code
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ll node, edge;
    cin >> node >> edge;
    ll arr[node][node] = {0};
    for (ll i = 0; i < edge; i++)
    {
        ll node1, node2;
        cin >> node1 >> node2;
        arr[node1][node2] = 1;
        arr[node2][node1] = 1;
    }
    ll mn = -1;
    ll cnt = 0;
    ll x = 0;
    ll dst = 0;
    ll prev = -1;
    for (ll i = 0; i < node; i++)
    {
        for (ll j = 0; j < node; j++)
        {
            if (i != j)
            {
                if (arr[i][j] == 1)
                {
                    arr[i][j] = 0;
                    arr[j][i] = 0;
                    if (prev != i)
                    {
                        prev = i;
                        cnt++;
                    }
                }
            }
        }
    }
    ll q;
    cin >> q;
    while (q--)
    {
        ll p;
        cin >> p;
        if (p == 3)
        {
            cout << node - cnt - 1 << endl;
        }
        if (p == 1)
        {
            ll u, v;
            cin >> u >> v;
            arr[u][v] = 1;
            arr[v][u] = 1;
            for (ll i = 0; i < node; i++)
            {
                for (ll j = 0; j < node; j++)
                {
                    if (i != j)
                    {
                        if (arr[i][j] == 1)
                        {
                            arr[i][j] = 0;
                            arr[j][i] = 0;
                            if (prev != i)
                            {
                                prev = i;
                                cnt++;
                            }
                        }
                    }
                }
            }
        }
        if (p == 2)
        {
            ll u, v;
            cin >> u >> v;
            arr[u][v] = 0;
            arr[v][u] = 0;
            for (ll i = 0; i < node; i++)
            {
                for (ll j = 0; j < node; j++)
                {
                    if (i != j)
                    {
                        if (arr[i][j] == 1)
                        {
                            arr[i][j] = 0;
                            arr[j][i] = 0;
                            if (prev != i)
                            {
                                prev = i;
                                cnt++;
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}