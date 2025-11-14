#include <iostream>
#include <iomanip>
#include <algorithm>
#include <math.h>
#include <climits>

using namespace std;


int main(){
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    int k2 = 2, k3 = 3, k4 = 4;
    int sum2 = 0, sum3 = 0, sum4 = 0;
    for (int i = 0; i < k2; i++){
        sum2 += a[i];
    }
    cout << sum2 << " ";
    for (int i = 1; i <= n - k2; i++){
        sum2 -= a[i - 1];
        sum2 += a[i + k2 - 1];
        cout << sum2 << " ";
    }
    cout << endl;
    
    for (int i = 0; i < k3; i++){
        sum3 += a[i];
    }
    cout << sum3 << " ";
    for (int i = 1; i <= n - k3; i++){
        sum3 -= a[i-1];
        sum3 += a[i + k3 - 1];
        cout << sum3 << " ";
    }
    cout << endl;

    for (int i = 0; i < k4; i++){
        sum4 += a[i];
    }
    cout << sum4 << " ";
    for (int i = 1; i <= n - k4; i++){
        sum4 -= a[i - 1];
        sum4 += a[i + k4 - 1];
        cout << sum4 << " ";
    }
    return 0;
}