#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v;
        for (int i = 1; i <= n; i++)
        {
            int ple;
            cin >> ple;
            v.push_back(ple);
        }

         vector<int>v2;
        int t = 1;
        for (int i = 1; i <= n; i++)
        {
            int x = i + v[i] * t;
            v2.push_back(x);
        }
        int arr[100]={0};

        for (int i = 1; i <= n; i++)
        {
            arr[v2[i]]++;
        }

        int max = INT_MIN; int min= INT_MAX;

        for (int i = 0; i < v.size(); i++)
        {

            if(arr[v2[i]] > max)
            {
                max = arr[v2[i]];
            }
            if(arr[v2[i]] < min)
            {
                min = arr[v2[i]];
            }
        }
        cout<<min<<" "<<max<<endl;



        
    }
    



    return 0;
}