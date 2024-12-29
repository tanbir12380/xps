#include <bits/stdc++.h>
using namespace std;


int main() {
    int n, m, k, f;
    cin >> n >> m >> k;

    vector<int> a(m);
    for (int i = 0; i < m; i++) {
        cin >> a[i];
    }

    cin >> f;

    int r = 0;
    for (int i = 0; i < m; i++) {
        int d = 0;
        for (int j = 0; j < n; j++) {
            int x = (a[i] >> j) & 1;
            int y = (f >> j) & 1;
            if (x != y) {
                d++;
            }
        }
        if (d <= k) {
            r++;
        }
    }

    cout << r << endl;

}
