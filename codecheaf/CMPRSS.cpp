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
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(int i=0;i<n;i++)
		{
			if(a[i]+1==a[i+1])
			{
				int c=1;
				while(c>=1)
				{
					if(a[i]+1==a[i+1])
					{
						c++;
						i++;
					}
					else
					{
						break;
					}
				}
				if(c>=3)
				{
					if(i!=n-1)
					{
						cout<<a[i-c+1]<<"..."<<a[i]<<",";
					}
					else
					{
						cout<<a[i-c+1]<<"..."<<a[i];
					}
				}
				if(c<3)
				{
					if(i!=n-1)
					{
						cout<<a[i-1]<<","<<a[i]<<",";
					}
					else
					{
						cout<<a[i-1]<<","<<a[i];
					}
					
				}
			}
			else
			{
				if(i!=n-1)
				{
					cout<<a[i]<<",";
				}
				else
				{
					cout<<a[i];
				}		
			}
		}
		cout<<endl;
	}
	return 0;
}