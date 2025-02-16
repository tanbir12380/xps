#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        long long r = LLONG_MAX;
        for (char c = 'a'; c <= 'z'; c++) {
            long long x = 0, m = 0;
            for (auto y : s) {
                if (y == c) {
                    x = 0;
                } else {
                    x++;
                    m = max(m, x);
                }
            }

            long long z = 0;
            while (m > 0) {
                z++;
                m /= 2;
            }
            r = min(r, z);
        }

        cout << r << endl;
    }
}
