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
với mỗi lần duyệt qua phần tử, cập nhật độ cứng hiện tại của chồng gạch, nếu phần tử dang xét nhỏ hơn độ cứng của chồng thì nó là độ là độ cứng mới
*/
bool cmp(int x, int y){
    return x > y;
}

int main(){
    int n; cin >> n;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a + n, cmp);
    vector<int> re = {a[0]};
    int strength = a[0];
    for (int i = 1; i < n; i++){
        --strength;
        if (a[i] < strength){
            strength = a[i];
        }
        re.push_back(a[i]);
        if (strength == 0){
            break;
        }

    }
    cout << re.size();
    return 0;

}
