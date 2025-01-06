#include <iostream>
#include <vector>
using namespace std;

long long g(long long a, long long b) {
    while (b != 0) {
        long long t = b;
        b = a % b;
        a = t;
    }
    return a;
}

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        long long s = 0, r = 0, p = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            s += a[i];
        }

        for (int i = 0; i < n - 1; i++) {
            p += a[i];
            r = max(r, g(s - p, p));
        }

        p = 0;
        for (int i = n - 1; i > 0; i--) {
            p += a[i];
            r = max(r, g(s - p, p));
        }

        cout << r << endl;
    }

    return 0;
}
