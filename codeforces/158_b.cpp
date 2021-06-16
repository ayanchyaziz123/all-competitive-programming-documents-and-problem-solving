#include<bits/stdc++.h>
using namespace std;

struct Node{
    int frequency;  
};

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    struct Node t4, t3, t2, t1;
    t4.frequency = 0;
    t3.frequency = 0;
    t2.frequency = 0;
    t1.frequency = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] == 4){
            t4.frequency += 1 ;
        }
        if(arr[i] == 3){
            t3.frequency += 1 ;
        }
        if(arr[i] == 2){
            t2.frequency += 1 ;
        }
        if(arr[i] == 1){
            t1.frequency += 1 ;
        }
    }
    
    t1.frequency = t1.frequency - t3.frequency;
    if(t1.frequency > 0){
        t2.frequency += t1.frequency;
        int tf = t2.frequency/4;
        int te = t2.frequency % 4;
        if(te > 0){
            tf += 1;
        }
        int tt2 = tf;
        int res = t4.frequency + t3.frequency + tt2;
        cout << res << endl;
    }
    else{
        int tf = t2.frequency/4;
        int te = t2.frequency % 4;
        if(te > 0){
            tf += 1;
        }
        int tt2 = tf;
        int res = t4.frequency + t3.frequency + tt2;
        cout << res << endl;
    }
    



    





    return 0;
}