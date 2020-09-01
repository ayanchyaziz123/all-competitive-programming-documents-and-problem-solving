#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n],b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int f=0;
        vector<bool> visited(n, false); 
        for (int i = 0; i < n; i++) { 
   
        if (visited[i] == true) 
            continue; 
        int count = 1; 
        for (int j = i + 1; j < n; j++) { 
            if (a[i] == a[j]) { 
                visited[j] = true; 
                count++; 
            } 
        }
        b[f]=count;
        f++;
        }
        sort(b,b+f);
        int man=INT_MIN,r;
        for(int i=0;i<f;i++){
            int y=count(b,b+f,b[i]);
            if(y>man){
                man=y;
                r=b[i];
            }
        }
        cout<<r<<endl;
}
}
