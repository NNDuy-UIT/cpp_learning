#include <iostream>
#include <algorithm>
#include <iomanip>
#include <math.h>

using namespace std;

long long mod = 1e9 + 7;

bool snt(long long n){
    for (long long i = 2; i * i <= n; i++){
        if (n % i == 0){
            return false;
        }
    }
    return n >= 2;
}

long long legendre(long long n, long long p){
    int count = 0;
    for(long long i = p; i <= n; i*= p){
        count = count%mod + (n/i)%mod;
        count %= mod;
    }
    return count;
}

int main(){
    long long k; cin >> k;
    long long sum = 1;
    for (long long i = 2; i <= k; i++){
        if (snt(i)){
            long long e = legendre(k, i);
            sum = sum%mod * (e + 1)%mod;
            sum %= mod;
        }
    }
    cout << sum;
    return 0;
}