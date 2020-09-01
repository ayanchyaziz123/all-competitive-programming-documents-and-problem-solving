#include<bits/stdc++.h>
using namespace std;
#include <bits/stdc++.h>
using namespace std;

int main()
{

   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   int t;
   cin >> t;

   while(t--)
   {
      int R, C;
      cin >> R >> C;
      int a[R][C];
      for (size_t i = 0; i < R; i++)
      {
         for (size_t j = 0; j < C; j++)
         {
            cin>>a[i][j];
         }
      }
      

      bool flag = true;

      for (int i = 0; i < R; i++)
      {
         for (int j = 0; j < C; j++)
         {
            if (a[i][j] > 3)
            {
               flag = false;
               break;
            }
            if ((i == 0 || i == R - 1) && (a[i][j] > 2 || ((j == 0 || j == C - 1) && a[i][j] > 1)))
            {
               flag = false;
               break;
            }
            if ((j == 0 || j== C - 1) && (a[i][j] > 2 || ((i == 0 || i == R - 1) && a[i][j] > 1)))
            {
               flag = false;
               break;
            }

         }

         if (!flag)
            break;
      }

      if (flag)
         cout << "Stable\n";
      else
         cout << "Unstable\n";
   }
}