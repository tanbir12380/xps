#include<bits/stdc++.h>
using namespace std;

bool cco(vector<long long> a, vector<long long> b, long long c, long long h) {
    long long sum = 0;
    for (int i = 0; i < a.size(); i++) {
        sum += (c / b[i]) * a[i];
    }
    return h - sum <= 0;
}

int main() {

    int t;
    cin >> t;
    while (t--) {
        long long h, n;
        cin >> h >> n;

        vector<long long> a(n), b(n);
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
            h -= a[i];
        }
        for (long long i = 0; i < n; i++) {
            cin >> b[i];
        }

        if (h <= 0) {
            cout << 1 << endl;
            continue;
        }

        long long l = 0, p = 4e10, q, r = 0;
        while (l <= p) {
            q = l + (p - l) / 2;
            if (cco(a, b, q, h)) {
                r = q;
                p = q - 1;
            } else {
                l = q + 1;
            }
        }
        cout << r + 1 << endl;
    }
}
