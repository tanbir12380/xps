#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n), b(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        for (int i = 0; i < n; ++i) {
            cin >> b[i];
        }

        vector<int> p, q;
        int c = 0, r = 0;

        for (int i = 0; i < n; ++i) {
            int d = b[i] - a[i];
            if (d < 0) {
                q.push_back(d);
            } else if (d > 0) {
                p.push_back(d);
                ++r;
            } else {
                ++r;
            }
        }

        sort(q.rbegin(), q.rend());
        sort(p.begin(), p.end());

        int j = 0;
        for (int i = 0; i < q.size(); ++i) {
            while (j < p.size() && p[j] + q[i] < 0) {
                ++j;
            }
            if (j < p.size() && p[j] + q[i] >= 0) {
                ++j;
                ++c;
                --r;
            }
        }

        c += r / 2;
        cout << c << '\n';
    }

    return 0;
}
