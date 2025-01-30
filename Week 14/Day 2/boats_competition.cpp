#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> V(n);
        for (int i = 0; i < n; i++) {
            cin >> V[i];
        }

        int m = 2 * n;
        vector<int> c(m + 1, 0);
        for (int i = 0; i < n; i++) {
            c[V[i]]++;
        }

        int x = 0;

        for (int k = 2; k <= m; k++) {
            int y = 0;
            for (int i = 1; i <= k / 2; i++) {
                int j = k - i;
                if (i > j) {
                    break;
                }
                if (i == j) {
                    y += c[i] / 2;
                } else {
                    y += min(c[i], c[j]);
                }
            }
            if (y > x) {
                x = y;
            }
        }

        cout << x << '\n';
    }

    return 0;
}
