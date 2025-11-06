#include <iostream>
#include <algorithm>
#include <iomanip>
#include <math.h>

using namespace std;

long long a[1000000];
int b[10] = {0};
int main(){
    int k; cin >> k;
    for (long long i = 0; i < k; i++){
        cin >> a[i];
    }
    for (int i = 0; i < k; i++){
        long long num = a[i];
        if (num < 10){
            b[a[i]]++;
        }
        else{
            while (num != 0){
            int dv = num % 10;
            b[dv]++;
            num /= 10;
            }
        }
    }
    for (int i = 0; i < 10; i++){
        if (b[i] > 0){
            cout << i << " " << b[i] << endl;
        }
    }
    return 0;
}