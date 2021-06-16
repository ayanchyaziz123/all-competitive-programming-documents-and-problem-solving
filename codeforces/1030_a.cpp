#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    bool flag = false;
    for(int i = 0; i < n; i++){
        int ple;
        cin >> ple;
        if(ple == 1){
            flag = true;
        }
    }
    if(flag){
        cout << "HARD" << endl;
    }
    else{
        cout << "EASY" << endl;
    }


}
