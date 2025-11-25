#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

long long mod = 1e9 + 7;





int main(){
    int n; cin >> n;
    int k; cin >> k;
    int turn = k % n;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    for (int i = 0; i < n; i++){
        if (i < turn){
            int value = a[i + n - turn];
            cout << value << " ";
        }
        else{
            int value = a[i - turn];
            cout << value << " ";
        }
    }
    return 0;
}