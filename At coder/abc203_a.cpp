#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{

    ll a, b, c;
    cin >> a >> b >> c;
    if (a == b && a == c && b == c)
    {
        cout << a << endl;
    }
    else if (a == b && a != c)
    {
        cout << c << endl;
    }
    else if (b == a && b != c)
    {
        cout << c << endl;
    }
    else if (c == a && c != b)
    {
        cout << b << endl;
    }
    else if (c == b && c != a)
    {
        cout << a << endl;
    }
    else{
        cout << 0 << endl;
    }
   

    return 0;
}