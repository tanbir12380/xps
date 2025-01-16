#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        bool f = true;
        cin >> n;
        map<int, int> m;

        for (int i = 0; i < n; i++) {
            cin >> x;
            for (int j = 2; j * j <= x; j++) {
                while (x % j == 0) {
                    m[j]++;
                    x /= j;
                }
            }
            if (x > 1) {
                m[x]++;
            }
        }

        for (auto p : m) {
            if (p.second % n != 0) {
                f = false;
                break;
            }
        }

        if (f) {
            cout << "YES" << '\n';
        } else {
            cout << "NO" << '\n';
        }
    }
}
