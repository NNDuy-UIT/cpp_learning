#include <iostream>
#include <algorithm>
#include <iomanip>
#include <math.h>
#include <climits>

using namespace std;

long long mod = 1e9 + 7;

// khi gặp một số bất kì, kiểm tra xem các số đằng trước đó xem chính số đó được in chưa,(dùng biến cờ) nếu chưa được in thì vô xử lí điều kiện
// khi gặp 1 số, xét tất cả các số đứng sau nó xem có còn số nào giống số đó không, nếu có thì cộng biến đếm (khi gặp số đầu biến đếm là 1)

int main(){
    int n; cin >> n;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    for (int i = 0; i < n; i++){
        bool check = true;
        for (int j = 0; j < i; j++){
            if (a[j] == a[i]){
                check = false;
                break;
            }
        }
        if (check == true){
            int dem = 1;
            for (int k = i + 1; k < n; k++){
                if (a[k] == a[i]) dem++;
            }
            cout << a[i] << " " << dem;
            cout << endl;
        }
    }
    return 0;

}
