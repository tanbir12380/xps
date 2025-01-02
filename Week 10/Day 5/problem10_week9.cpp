#include <bits/stdc++.h>
using namespace std;

long long gcd(long long x, long long y) {
    while (y != 0) {
        long long s = y;
        y = x % y;
        x = s;
    }
    return x;
}

int main() {
    int n;
    cin >> n;
    long long a[n];
    long long r = 0;
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        r = max(r, a[i]);
    }
    
    long long z = 0;
    for (int i = 0; i < n; i++) {
        z = gcd(z, r - a[i]);
    }

    long long y = 0;
    for (int i = 0; i < n; i++) {
        y += (r - a[i]) / z;
    }
    
    cout << y << " " << z << endl;

    return 0;
}
