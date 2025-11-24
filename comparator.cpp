#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

long long mod = 1e9 + 7;

int odd_digit(int n){
    int so_le = 0;
    while(n){
        if (n % 2 != 0){
            so_le++;
        }
        n /= 10;
    }
    return so_le;
}

bool cmp(int x, int y){
    if (odd_digit(x) != odd_digit(y)){
        return odd_digit(x) > odd_digit(y);
    }
    else{
        return x < y;
    }
}

int main(){
    int n; cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++){
        long long value; cin >> value;
        v.push_back(value);
    }
    sort(v.begin(), v.end(), cmp);
    for (auto value : v){
        cout << value << " ";
    }
    return 0;
}