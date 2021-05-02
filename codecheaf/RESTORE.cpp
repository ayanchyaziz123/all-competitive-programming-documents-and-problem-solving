#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int var1 = 4000005;
    bool var2[var1 + 1];
    memset(var2, true, sizeof(var2));
    for (long long int var3 = 2; var3 * var3 <= var1; var3++)
        if (var2[var3] == true)
            for (long long int i = var3 * var3; i <= var1; i += var3)
                var2[i] = false;
    long long int var4 = 0;
    cin >> var4;
    while (var4--) {
        long long int var5 = 2;
        long long int var6 = 0;
        cin >> var6;
        long long int var7[var6];
        for (long long int i = 0; i < var6; i++)
            cin >> var7[i];
        unordered_map<long long int, long long int> var8;
        for (long long int i = 0; i < var6; i++) {
            if (var8.find(var7[i]) == var8.end()) {
                while (var2[var5] == 0)
                    var5++;
                var8[var7[i]] = var5;
                var5++;
            }
        }
        for (long long int i = 0; i < var6; i++)
            cout << var8[var7[i]] << " ";
        cout << "\n";
    }
    return 0;
}