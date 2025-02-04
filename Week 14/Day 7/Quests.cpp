#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long a, b, c;
        cin >> a >> c >> b;

        vector<long long> V1;
        for (long long i = 1; i <= a; i++) {
            long long d;
            cin >> d;
            V1.push_back(d);
        }

        sort(V1.begin(), V1.end(), greater<long long>());

        vector<long long> V2(a + 1, 0);
        for (long long i = 1; i <= a; i++) {
            V2[i] = V2[i - 1] + V1[i - 1];
        }

        long long e = 1, f = 1e9, g = -1;

        while (e <= f) {
            long long h = (e + f) / 2;
            long long j = V2[min(h, a)];
            long long k = b / h;
            long long l = b % h;
            long long m = k * j + V2[min(l, a)];

            if (m >= c) {
                g = h;
                e = h + 1;
            } else {
                f = h - 1;
            }
        }

        if (g == -1) {
            cout << "Impossible" << endl;
        } else if (g == 1e9) {
            cout << "Infinity" << endl;
        } else {
            cout << g - 1 << endl;
        }
    }

}
