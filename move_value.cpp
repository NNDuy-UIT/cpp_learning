#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>

using namespace std;

int mod = 1e9 + 7;


// khi làm bài này, cần thực hiện phép di dời giá trị, tương tự như tìm ước chung lớn nhất của các số
// cần viết dãy số ra, sau đó dựa vào giá trị cần tính để xác định các giá trị phía sau, sử dụng vòng lặp để liên tục gán mới các giá trị

int F(int n){
    long long f1 = 1;
    long long f2 = 1;
    long long fi;
    if (n == 1 || n == 2){
        return 1;
    }
    for (int i = 3; i <= n; i++){
        fi = (2 * f2)%mod + (3 * f1)%mod;
        fi %= mod;
        f1 = f2;
        f2 = fi;
    }
    return fi;
}

int main(){
    int n; cin >> n;
    cout << F(n);
    return 0;
}
