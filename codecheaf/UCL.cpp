#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);

    int t;
    cin >> t;
    while (t--)
    {
        int i, j;
        string team1[12], team2[12];
        int teamOneGoals[12], teamTwoGoals[12];
        string vs;
        set<string> st;

        for (int i = 0; i < 12; i++)
        {
            cin >> team1[i] >> teamOneGoals[i] >> vs >> team2[i] >> teamTwoGoals[i];
            st.insert(team1[i]);
            st.insert(team2[i]);
        }
        vector<pair<string, pair<int, int>>> v;

        for (auto it = st.begin(); it != st.end(); it++)
        {
            v.push_back(make_pair(*it, make_pair(0, 0)));
        }

        for (auto it = v.begin(); it != v.end(); it++)
        {
            cout << *it << "Ayan" << endl;
        }
    }
}