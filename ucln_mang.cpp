#include <iostream>
#include <iomanip>
#include <algorithm>
#include <math.h>

using namespace std;

int ucln(int a, int b){
    while (b != 0){
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}


int main(){
    int k; cin >> k;
    int a[k];
    for (int i = 0; i < k; i++){
        cin >> a[i];
    }
    int ucln_max = 0;
    for (int i = 0; i < k; i++){
        for (int j = i + 1; j < k; j++){
            int uoc = ucln(a[i], a[j]);
            ucln_max = max(ucln_max, uoc);
        }
    }
    cout << ucln_max;
    return 0;
}