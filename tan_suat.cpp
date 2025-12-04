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


/*
Sắp xếp các phần tử trong mảng theo tần suất giảm dần, nếu 2 số có cùng tần suất thì số nào nhỏ hơn sẽ in ra trước.

Sắp xếp các phần tử trong mảng theo tần suất giảm dần, nếu 2 số có cùng tần suất thì số nào xuất hiện trước sẽ in ra trước.
*/

int main(){
    int n; cin >> n;
    map<int, int> mp;
    vector<int> a;
    vector<int> b;
    for (int i = 0; i < n; i++){
        int value; cin >> value;
        a.push_back(value);
        b.push_back(value);
        mp[value]++;
    }
    sort(a.begin(), a.end(), [&mp](int a, int b){
        if (mp[a] != mp[b]){
            return mp[a] > mp[b];
        }
        else{
            return a < b;
        }
    });
    for (auto value : a){
        cout << value << " ";
    }
    cout << endl;
    stable_sort(b.begin(), b.end(), [&mp](int a, int b){
        return mp[a] > mp[b];
    });
    for (auto value : b){
        while (mp[value] > 0){
            cout << value << " ";
            mp[value]--;
        }
    }
    return 0;

}
