#include <iostream>
#include <iomanip>
#include <climits>
#include <algorithm>
#include <vector>
#include <map>
#include <set>
#include <cmath>
using namespace std;

int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, -1, 1, 0};
int n, m;

int a[1000][1000];
int visited[1000][1000];

void loang(int i, int j, int& p){
    visited[i][j] = 1;
    int count = 0;
    for (int k = 0; k < 4; k++){
        int i1 = i + dx[k], j1 = j + dy[k];
        if (i1 >= 0 && i1 < n && j1 >= 0 && j1 < m && a[i1][j1] == 1){
            count++;
            if (visited[i1][j1] == 0){
                loang(i1, j1, p);
            }
        }
    }
    p = p + 4 - count;
}

int main()
{
    cin >> n >> m;
    vector<int> v;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    int maxp = -1;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (a[i][j] == 1 && visited[i][j] == 0){
                int p = 0;
                loang(i, j, p);
                maxp = max(maxp, p);
            }
        }
    }
    cout << maxp;
    return 0;
}