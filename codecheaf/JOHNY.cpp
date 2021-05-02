#include <bits/stdc++.h>
using namespace std;

void binarySearch(int n, int arr[], int search)
{
    int l, r;
    l = 0;
    r = n - 1;
    int mid = (l + r) / 2;
    while (r >= l)
    {
        if (arr[mid] == search)
        {
            cout << mid + 1;
            break;
        }
        else if (arr[mid] < search)
        {
            l = mid + 1;
        }
        else if (arr[mid] > search)
        {
            r = mid - 1;
        }
        mid = (l + r) / 2;
    }
}

int main()
{
    freopen("input.txt", "r", stdin);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int k, x;
        cin >> k;
        x = arr[k - 1];
        sort(arr, arr + n);
        binarySearch(n, arr, x);
        cout << endl;
    }

    return 0;
}