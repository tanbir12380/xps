#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >> k;

    vector<long long> a(n + 1);
    vector<long long> b(n + 2, 0);  
    vector<long long> c(m + 2, 0);  
    vector<int> x(m + 1);
    vector<int> y(m + 1);
    vector<int> z(m + 1);

    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    for (int i = 1; i <= m; i++) {
        cin >> x[i] >> y[i] >> z[i];
    }

    while (k--) {
        int l, r;
        cin >> l >> r;
        c[l]++;
        if (r + 1 <= m) {
            c[r + 1]--;
        }
    }

    for (int i = 1; i <= m; i++) {
        c[i] += c[i - 1];
    }

    for (int i = 1; i <= m; i++) {
        if (c[i]) {
            long long t = (long long)z[i] * c[i];
            b[x[i]] += t;
            if (y[i] + 1 <= n) {
                b[y[i] + 1] -= t;
            }
        }
    }

    for (int i = 1; i <= n; i++) {
        b[i] += b[i - 1];
    }

    for (int i = 1; i <= n; i++) {
        cout << a[i] + b[i] << " ";
    }
    cout << endl;

    return 0;
}
