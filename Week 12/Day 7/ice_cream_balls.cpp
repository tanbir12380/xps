#include <iostream>
using namespace std;

bool ext(long long a, long long n) {
    long long v = (a * (a - 1)) / 2;
    if (v <= n) {
        return true;
    }
    return false;
}

int main() {

    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long f = 0;
        long long h = 0, l = 2, r = 2e9, m;
        while (l <= r) {
            m = l + (r - l) / 2;
            if (ext(m, n)) {
                h = m;
                l = m + 1;
            } else {
                r = m - 1;
            }
        }
        long long v = (h * (h - 1)) / 2;
        f = n - v;
        cout << h + f << endl;
    }
    return 0;
}
