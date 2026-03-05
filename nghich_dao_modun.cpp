#include <iostream>
#include <iomanip>
#include <climits>
#include <algorithm>
#include <vector>
#include<string>
#include <map>
#include <set>
#include <stack>
#include <cmath>

using namespace std;

typedef long long ll;
#define fast_io() ios::sync_with_stdio(false); cin.tie(nullptr);

ll mod = 1e9 + 7;


int gcd(int a, int b, int &x, int &y){
    if (b == 0){
        x = 1;
        y = 0;
        return a;
    }
    else{
        int x1, y1;
        int d = gcd(b, a % b, x1, y1);
        x = y1;
        y = x1 - y1 * (a / b);
        return d;
    }
}

void inverse(int a, int m){
    int xA, yA;
    int d = gcd(a, m, xA, yA);
    if (d != 1) cout << "NOT FOUND";
    else{
        xA = (xA % m + m) % m;
        cout << xA;
    }
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output3.txt", "w", stdout);
    fast_io();
    int a, m; cin >> a >> m;
    inverse(a, m);
    return 0;
}