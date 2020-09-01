//CPP program to illustrate pair STL
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // pair <int, char> PAIR1 ;

    //PAIR1.first = 100;
    //PAIR1.second = 'G' ;

    // PAIR1 = make_pair(4, 'a')

    //cout << PAIR1.first << " " ;
    // cout << PAIR1.second << endl ;

    vector<pair<string, int>> v;
    for (int i = 0; i < 3; i++)
    {
        string s;
        int a;
        cin >> s >> a;
        v.push_back({s, a});
    }

    /*for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }*/

    for (auto it : v)
    {
        cout << it.first << " " << it.second << endl;
    }

    return 0;
}