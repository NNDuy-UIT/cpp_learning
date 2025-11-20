#include <bits/stdc++.h>

using namespace std;

long long danh_dau[1000000001];

int main(){
    int n; cin >> n;
    int count = 0;
    vector<long long> v;
    for (int i = 0; i < n; i++){
        long long value; cin >> value;
        danh_dau[value]++;
    }
    for (int i = 0; i <= 1000000001; i++){
        if (danh_dau[i] != 0){
            v.push_back(i);
        }
    }
    long long min_k =LONG_MAX;
    for (int i = 0; i < n - 1; i++){
        min_k = min(min_k, abs(v[i] - v[i + 1]));
    }
    for (int i = 0; i < n - 1; i++){
        if (abs(v[i] - v[i + 1]) == min_k){
            count ++;
        }
    }
    cout << min_k << endl;
    cout << count;
}