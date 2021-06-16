#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int ans = 1;
        while(true){
            if(ans * 2 <=n){
                ans = ans * 2;

            }
            else{
                break;
            }
            
        }
        ans--;
        cout << ans << endl;
        
    }
    
    return 0;
}