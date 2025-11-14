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
    int dem = 0;
    int dem0 = 0;
    for (int i = 0; i < n; i++){
        if (a[i] == 1){
            dem++;
        }
        else{
            if (dem != 0){
                cout << dem << " ";
                dem = 0;
            }
        }
    }
    if (dem != 0) cout << dem << " " << endl;

    for (int i = 0; i < n; i++){
        if (a[i] == 0){
            dem0++;
        }
        else{
            if (dem0 != 0){
                cout << dem0 << " ";
                dem0 = 0;
            }
        }
    }
    if (dem0 != 0) cout << dem0 << " " << endl;
    return 0;
}