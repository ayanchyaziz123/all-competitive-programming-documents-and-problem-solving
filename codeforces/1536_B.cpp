#include <bits/stdc++.h>
using namespace std;

string ss;
void num_to_string(int num)
{
    if (num)
    {
        num_to_string((num - 1) / 26);
        ss += ('a' + (num - 1) % 26);
    }
}
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        string st;
        cin >> st;
        string ans;
        int i = 1;
        while (1)
        {
            ss = "";
            num_to_string(i);
            int pos = st.find(ss);
            if (pos == -1)
            {
                ans = ss;
                break;
            }
            i++;
        }
        cout << ans << endl;
    }

    return 0;
}