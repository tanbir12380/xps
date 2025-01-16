#include <bits/stdc++.h>
using namespace std;

bool isPrime(long long x) {
    if (x < 2) {
    return false;
    }
    for (long long i = 2; i * i <= x; i++) {
        if (x % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {

    int t;
    cin >> t;
    
    while (t--) {
        long long x;
        cin >> x;
        long long sX = sqrt(x);
        if (sX * sX == x && isPrime(sX)) {
            cout << "YES" << '\n';
        } else {
            cout << "NO" << '\n';
        }
    }

    return 0;
}
