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

int go_stair(int n){
    if (n == 0) return 0;
    else if (n == 1 || n == 2) return 1;
    int res = INT_MAX;
    int way1 = go_stair(n - 1);
    if (n > 1){
        res = min(way1, go_stair(n - 2));
    }
    return res + 1;

}

int main()
{
    int n; cin >> n;
    cout << go_stair(n);
    return 0;
}