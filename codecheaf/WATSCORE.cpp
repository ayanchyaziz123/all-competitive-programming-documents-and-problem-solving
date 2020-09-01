#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    for (int i=1;i<=T;i++)
    {int arr[12]={0},sum=0,n;
        cin>>n;
        for(int j=1;j<=n;j++)
        {int p,s;
            cin>>p>>s;
            if((s>arr[p])&&(p<=8))
            arr[p]=s;

        }
        for(int j=1;j<=11;j++)
        {
            sum=sum+arr[j];
        }
        cout<<sum<<endl;
    }
    return 0;
}