#include <bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("input.txt", "r", stdin);
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        stack<char> rpn;
        string res = "";

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '(')
            {
                rpn.push('(');
            }
            else if (s[i] == ')')
            {
                while (rpn.top() != '(')
                {
                    res += rpn.top();
                    rpn.pop();
                }
                rpn.pop();
            }
            else if (s[i] == '+' || s[i] == '*' || s[i] == '/' || s[i] == '-' || s[i] == '^')
                rpn.push(s[i]);
            else
                res += s[i];
        }
        cout << res << endl;
    }
    return 0;
}