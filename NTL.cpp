#include <iostream>
#include <iomanip>
#include <climits>
#include <algorithm>
#include <vector>
#include <map>
#include <set>
#include <cmath>

using namespace std;

long long mod = 1e9 + 7;

#define fast_io() ios::sync_with_stdio(false); cin.tie(nullptr);



int main(){
    int n; cin >> n;
    long long a[n + 1];
    for (int i = 1; i <= n; i++){
        cin >> a[i];
    }
    vector<int> st;
    for (int i = 1; i <= n; i++){
        for (int j = st.size() - 1; j >= 0; j--){
            if (a[st[j]] >= a[i]){
                st.pop_back();
            }
        }
        if (st.size() == 0) cout << 0 << " ";
        else{
            auto it = st.rbegin();
            cout << *it << " ";
        }
        st.push_back(i);
    }
    return 0;
}