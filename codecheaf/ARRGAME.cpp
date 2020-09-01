#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];int k=0;
        for(int i =0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]==0)
             { k++;}
        } 
        if(k==n-2)
        {
            if(k%2==0)
            cout<<"No"<<endl;
            else
            cout<<"Yes"<<endl;
        }
        
        
    }
}