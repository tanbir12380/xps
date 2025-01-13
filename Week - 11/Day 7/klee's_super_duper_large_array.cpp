#include <bits/stdc++.h>
using namespace std;

long long calc(long long m, long long n, long long k) {
    long long p1 = (m * (m + 1) / 2) - (k * (k - 1) / 2);
    long long p2 = ((k + n - 1) * (k + n) / 2) - ((m + 1) * m / 2);
    return p1 - p2;
}

int main() {
    int t ;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;

        long long l = k, r = k + n - 1, m, res;
        while (l < r) {
            m = l + (r - l) / 2;
            if (calc(m, n, k) < 0) {
                l = m + 1;
                res = l;
            } else {
                r = m;
            }
        }

        long long v1 = calc(res, n, k), v2 = calc(res - 1, n, k);
        cout << min(abs(v1), abs(v2)) << endl;
    }
}
