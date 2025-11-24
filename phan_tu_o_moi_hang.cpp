#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

long long mod = 1e9 + 7;

int main(){
    map<int, int> danh_dau;
    set<int> result;
    int n; cin >> n;
    vector<vector<int>> v;
    for (int i = 0; i < n; i++){
        vector<int> b;
        for (int i = 0; i < n; i++){
            long long value; cin >> value;
            b.push_back(value);
        }
        v.push_back(b);
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (i == 0){
                danh_dau[v[i][j]] = 1;
            }
            else{
                if (danh_dau[v[i][j]] == i){
                    danh_dau[v[i][j]] = i + 1;
                }
            }
        }
    }
    for (auto it : danh_dau){
        if (it.second == n){
            result.insert(it.first);
        }
    }
    if (result.size() == 0){
        cout << "NOT FOUND";
    }
    else{
        for (auto value : result){
            cout << value << " ";
        }
    }
    return 0;
}