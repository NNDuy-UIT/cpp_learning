#include <iostream>
#include <algorithm>
#include <iomanip>
#include <math.h>

using namespace std;


// khi kiểm tra N số nhập từ bàn phím mà không dùng mảng, vấn đề cần giải quyết là phải có giá trị được lưu để so sánh với nhau
// vì vậy nên sẽ có một biến nhập từ bên ngoài, ví dụ 5 thì 1 biến nhập ngoài, 4 biến từ vòng lặp, sử dụng flag, trong mỗi vòng lặp khi nhập biến, so sánh số nhập thứ 2 với giá trị ban đầu, nếu nó tăng dần riel
// thì gán giá trị số nhập thứ 2 cho biến bên ngoài để tiếp tục so sánh với các số 3 4 5, dùng flag check điều kiện

int main(){
    bool check = true;
    int k;
    cin >> k;
    int m;
    cin >> m;
    for (int i = 2; i <= k; i++){
        int t; cin >> t;
        if (m > t){
            check = false;
        }
        m = t;
    }
    if (check) cout << "Ascending";
    else cout << "Not Ascending";
    return 0;

}
