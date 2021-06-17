#include <bits/stdc++.h>
using namespace std;

bool triangel(int a, int b, int c)
{
    return (a + b > c) && (a + c) > b && (b + c) > a;
}

bool segment(int a, int b, int c)
{
    return (a == b + c) || (b == a + c) || (c == a + b);
}

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    bool tr = false;
    bool seg = false;

    tr = tr || triangel(a, b, c);
    tr = tr || triangel(a, b, d);
    tr = tr || triangel(a, c, d);
    tr = tr || triangel(b, c, d);

    seg = seg || segment(a, b, c);
    seg = seg || segment(a, b, d);
    seg = seg || segment(a, c, d);
    seg = seg || segment(b, c, d);

    if (tr)
    {
        cout << "TRIANGLE" << endl;
    }
    else if (seg)
    {
        cout << "SEGMENT" << endl;
    }
    else
    {
        cout << "IMPOSSIBLE" << endl;
    }

    return 0;
}