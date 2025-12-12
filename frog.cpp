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

int h[1001];

/*
cho n tảng đá có chi phí khác nhau xếp trên cùng 1 hàng, 1 con ếch đang ngồi trên tảng đá đầu tiên và cố nhảy đến viên đá thứ n
mỗi lần nhảy, ếch có thể nhảy qua cùng lúc 1 hoặc 2 tảng đá, chi phí nhảy là độ chênh lệch giữa tảng đá ếch nhảy và tảng đá ếch nhảy tới
hãy tính xem chi phí thấp nhất để ếch nhảy từ tảng đá đầu tiên đến tảng đá cuối cùng
*/

/*
ví dụ có 6 viên đá, thì ếch sẽ nhảy từ viên thứ 4 tới 6, hoặc viên thứ 5 tới 6, lúc này chi phí sẽ là độ chênh giữa viên 4 6 hoặc viên 5 6 VÀ
chi phí NHỎ NHẤT để con ếch tới được viên 4 hoặc viên 5 (so sánh), và lại quay lại, chi phí nhỏ nhất tới đc viên 4 sẽ là độ chênh 3 4
hoặc 2 4 và chi phí nhỏ nhất để tới viên 2 hoặc 3
Đây là 1 bài cần khéo léo áp dụng đệ quy
*/

int function(int i){
    if (i == 0) return 0;
    int cost = INT_MAX;
    // cách t1 con cóc nhảy
    cost = min(cost, function(i - 1) + abs(h[i] - h[i - 1]));
    // cách t2 con cóc nhảy
    if (i > 1){
        cost = min(cost, function(i - 2) + abs(h[i] - h[i - 2]));
    }
    return cost;
}

int main(){
    fast_io();
    int n; cin >> n;
    for (int i = 0; i < n; i++){
        cin >> h[i];
    }
    cout << function(n - 1);
    return 0;
}