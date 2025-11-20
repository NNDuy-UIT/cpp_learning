#include <bits/stdc++.h>

using namespace std;

long long mod = 1e9 + 7;
/*
đối với bài này, cần dùng mảng đánh dấu và mảng cộng dồn
ý tưởng sẽ là đánh dấu phần tử cùng với nhập mảng cộng dồn, với mỗi phần tử a[i] chưa được đánh dấu thì mảng cộng dồn ở trị trí i sẽ được tăng giá trị
(chưa đánh dấu = giá trị chưa xuất hiện = giá trị khác nhau)
*/


int mark[1000005];

int main(){
    int n; cin >> n;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    int f[n] = {0};
    int cnt = 0;
    for (int i = 0; i < n; i++){
        if (mark[a[i]] == 0){
            mark[a[i]] = 1;
            cnt++;
        }
        f[i] = cnt;
    }
    int q; cin >> q;
    while (q--){
        int k; cin >> k;
        cout << f[k] << endl;
    }
    return 0;

}
