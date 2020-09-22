#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int countFreq(ll arr[], int n)
{
    vector<ll> v;
    // Mark all array elements as not visited
    vector<bool> visited(n, false);

    // Traverse through array elements and
    // count frequencies
    for (int i = 0; i < n; i++)
    {

        // Skip this element if already processed
        if (visited[i] == true)
            continue;

        // Count frequency
        int count = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                visited[j] = true;
                count++;
            }
        }
        v.push_back(count);
    }
    return *max_element(v.begin(), v.end());
}

int frequencyOfSmallest(int n, ll arr[])
{
    int mn = arr[0], freq = 1;

    for (int i = 1; i < n; i++)
    {

        // If current element is smaller
        // than minimum
        if (arr[i] < mn)
        {
            mn = arr[i];
            freq = 1;
        }
        // If current element is equal
        // to smallest
        else if (arr[i] == mn)
            freq++;
    }

    return freq;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        ll p[n][n] = {0};

        for (ll t = 0; t < n; t++)
        {
            for (ll i = 0; i < n; i++)
            {
                ll ps1 = (i + 1) + (v[i] * t);
                p[t][i] = ps1;
            }
        }

        vector<ll> v2;
        ll get = 0;
        int ab = 0;
        ll sum = 0;
        int max = 0;
        int min = 1000;
        ll a[n];

        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < n; j++)
            {
                sum += p[j][i];
            }
            a[i] = sum;
            sum = 0;
        }

        cout << frequencyOfSmallest(n, a) << " " << countFreq(a, n) << endl;
    }

    return 0;
}