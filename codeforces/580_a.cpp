#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n+1];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int prev = 0;
    for(int i = 1; i < n ; i++){
        int count = 0;
        while(1){
            if(arr[i - 1] > arr[i] || i >= n){
                if(count > prev){
                    prev = count;
                }      
                 break;               
        }
        else{
            count++;
        }
        
        i++;
        }
    }
    cout << prev + 1 << endl;



    return 0;
}