#include<bits/stdc++.h>
using namespace std;

#define ll long long int 

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        string str;
        cin>>str;
        auto res = unique(str.begin(), str.end()); 
        cout << string(str.begin(), res) 
         << endl; 
        
    }
    return 0;
}