#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        long long o = 0, m = 0, r;
        int x = -1, y = -1;

        for (int i = 0; i < n; i++) {
            if (a[i] == 0 && x == -1) {
                x = i;
            }
            if (a[i] == 1) {
                y = i;
            }

            if (a[i] == 1) {
                o++;
            } else {
                m += o;
            }
        }

        r = m;

        if (x != -1) {
            vector<int> b = a;
            b[x] = 1;
            long long u = 0, v = 0;
            for (int i = 0; i < n; i++) {
                if (b[i] == 1) {
                    u++;
                } else {
                    v += u;
                }
            }
            r = max(r, v);
        }

        if (y != -1) {
            vector<int> c = a;
            c[y] = 0;
            long long u = 0, v = 0;
            for (int i = 0; i < n; i++) {
                if (c[i] == 1) {
                    u++;
                } else {
                    v += u;
                }
            }
            r = max(r, v);
        }

        cout << r << endl;
    }

    return 0;
}
