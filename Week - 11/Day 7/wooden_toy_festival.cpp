#include <bits/stdc++.h>
using namespace std;

bool ok(int t, int n, vector<int> a) {
    int p = 1, l = 0;
    for (int r = 0; r < n; r++) {
        if (a[r] - a[l] > 2 * t) {
            l = r;
            p++;
        }
    }
    return p <= 3;
}

int main() {

    int t ;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++){
        cin >> a[i]; 
        }
        sort(a.begin(), a.end());

        int l = 0, r = 1e9, m, ans;
        while (l <= r) {
            m = l + (r - l) / 2;
            if (ok(m, n, a)) {
                ans = m;
                r = m - 1;
            } else {
                l = m + 1;
            }
        }

        cout << ans << endl;
    }

    return 0;
}
