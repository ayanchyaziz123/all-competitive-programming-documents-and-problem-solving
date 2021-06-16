#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        char str[3][3];
        int count_x = 0, count_o = 0, win_x = 0, win_o = 0, count_ = 0;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cin >> str[i][j];
                if (str[i][j] == 'X')
                {
                    count_x++;
                }
                else if (str[i][j] == 'O')
                {
                    count_o++;
                }
                else if (str[i][j] == '_')
                {
                    count_++;
                }
            }
        }

        for (int i = 0; i < 3; i++)
        {
            if (str[i][0] == str[i][1] && str[i][2] == str[i][1])
            {
                if (str[i][0] == 'X')
                {
                    win_x++;
                }
                else if (str[i][0] == 'O')
                {
                    win_o++;
                }
            }
        }

        for (int i = 0; i < 3; i++)
        {
            if (str[0][i] == str[1][i] && str[2][i] == str[1][i])
            {
                if (str[0][i] == 'X')
                {
                    win_x++;
                }
                else if (str[0][i] == 'O')
                {
                    win_o++;
                }
            }
        }

        if (str[0][0] == str[1][1] && str[2][2] == str[1][1])
        {
            if (str[1][1] == 'X')
            {
                win_x++;
            }
            else if (str[1][1] == 'O')
            {
                win_o++;
            }
        }

        if (str[0][2] == str[1][1] && str[2][0] == str[1][1])
        {
            if (str[1][1] == 'X')
            {
                win_x++;
            }
            else if (str[1][1] == 'O')
            {
                win_o++;
            }
        }
        if(count_o > count_x )
        {
            cout<<3<<endl;
        }
        else if(count_x - count_o > 1){
            cout<<3<<endl;
        }
        else if (count_x>count_o && win_x==1 && win_o==0)
        {
            cout<<1<<endl;
            
        }
        
    }

    return 0;
}