#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin>>a>>b;
        int x;
        x = abs(a - b);
        int move = 0;
        while ( x != 0)
        {
            if(x / 10 > 0)
            {
                move += x / 10;
                x = x % 10;
            }
            else if(x < 10)
            {
                move ++;
                x = 0; 
            }         
            
        }
        cout<<move<<endl;  

    }

    return 0;
}