#include <bits/stdc++.h>
using namespace std;

int main() {

    const int N = 1e6 + 5;
    int c1[N] = {0}, c2[N] = {0};
    int t;
    cin >> t;

    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;

        vector<int> V1(n), V2(m);
        for (int i = 0; i < n; i++) {
            cin >> V1[i];
        }
        for (int i = 0; i < m; i++) {
            cin >> V2[i];
            c2[V2[i]]++;
        }

        int d = 0, r = 0;

        for (int i = 0; i < n; i++) {
            if (i >= m) {
                int x = V1[i - m];
                d -= min(c1[x], c2[x]);
                c1[x]--;
                d += min(c1[x], c2[x]);
            }
            int x = V1[i];
            d -= min(c1[x], c2[x]);
            c1[x]++;
            d += min(c1[x], c2[x]);
            if (i >= m - 1) {
                r += (d >= k);
            }
        }

        cout << r << "\n";

        for (int i = 0; i < n; i++) {
            c1[V1[i]] = 0;
        }
        for (int i = 0; i < m; i++) {
            c2[V2[i]] = 0;
        }
    }

}
