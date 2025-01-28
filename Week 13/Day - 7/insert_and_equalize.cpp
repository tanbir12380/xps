#include <bits/stdc++.h>

using namespace std;

long long gcd(long long a, long long b) {
    while (b) {
        long long c = b;
        b = a % b;
        a = c;
    }
    return a;
}

int main() {

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<long long> V(n);
        for (int i = 0; i < n; i++) {
            cin >> V[i];
        }

        if (n == 1) {
            cout << 1 << '\n';
            continue;
        }

        sort(V.begin(), V.end());

        long long g = V[1] - V[0];
        for (int i = 2; i < n; i++) {
            g = gcd(g, V[i] - V[i - 1]);
        }

        long long e = V[n - 1] + g;
        for (int i = n - 1; i > 0; i--) {
            if (V[i] - g > V[i - 1]) {
                e = V[i] - g;
                break;
            }
        }

        long long f = max(V[n - 1], e);
        long long x = (f - e) / g;
        for (int i = 0; i < n; i++) {
            x += (f - V[i]) / g;
        }

        cout << x << '\n';
    }

    return 0;
}
