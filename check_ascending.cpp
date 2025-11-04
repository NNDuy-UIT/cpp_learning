#include <iostream>
#include <algorithm>
#include <iomanip>
#include <math.h>

using namespace std;

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