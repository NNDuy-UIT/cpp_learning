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

int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

int n, m;
int a[105][105];
int visited[105][105];

void loang(int i, int j){
    visited[i][j] = 1;
    for (int k = 0; k < 8; k++){
        int i1 = i + dx[k], j1 = j + dy[k];
        if (i1 >= 0 && i1 < n && j1 >= 0 && j1 < m && a[i1][j1] == 1 && visited[i1][j1] == 0){
            loang(i1, j1);
        }
    }
}

int main(){
    fast_io();
    cin >> n >> m;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    int count = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (a[i][j] == 1 && visited[i][j] == 0){
                count++;
                loang(i, j);
            }
        }
    }
    cout << count;
    return 0;
}
