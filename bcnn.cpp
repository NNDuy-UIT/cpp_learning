#include <iostream>
#include <algorithm>
#include <iomanip>
#include <math.h>
#include <numeric>

using namespace std;


long long mod = 1e9 + 7;



int main(){
    long long x, y, z, n; cin >> x >> y >> z >> n;
    long long min_value = pow(10, (n - 1));
    long long max_value = pow(10, n) - 1;
    long long bcnn = lcm(lcm(x, y), z);
    long long result = (min_value + bcnn - 1) / bcnn * bcnn;
    if (result > max_value) cout << -1;
    else cout << result;
    return 0;
}