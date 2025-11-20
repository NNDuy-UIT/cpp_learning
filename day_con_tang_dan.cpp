#include <bits/stdc++.h>
using namespace std;

long long mod = 1e9 + 7;


int main(){
    int n; cin >> n;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    int index;
    int len = 0;
    for (int i = 1; i < n; i++){
        if (a[i] > a[i-1]){
            len++;
        }
        else{
            if (len > 1){
                index = i - 1 - len;
                for (int i = 0; i <= len; i++){
                    cout << a[index + i] << " ";
                }
            }
            len = 0;
        }
    }
    if (len >= 1){
        index = n - 1 - len;
        for (int i = 0; i <= len; i++){
            cout << a[index + i] << " ";
        }
    }
    return 0;
}