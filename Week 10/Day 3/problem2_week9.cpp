#include <bits/stdc++.h>
using namespace std;

long long f(long long a, long long b) {
    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
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
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        long long x = 0, y = 0;
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                x = f(x, a[i]);
            } else {
                y = f(y, a[i]);
            }
        }

        bool g = true, h = true;
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0 && a[i] % y == 0) {
                h = false;
            } else if (i % 2 == 1 && a[i] % x == 0) {
                g = false;
            }
        }

        if (g) {
            cout << x << endl;
        } else if (h) {
            cout << y << endl;
        } else {
            cout << "0" << endl;
        }
    }

    return 0;
}
