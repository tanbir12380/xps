#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n), b(n + 1);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        sort(a.begin(), a.end());
        int ans = 0;

        for (int k = 1; k <= n; k++) {
            for (int i = 0; i <= n; i++) {
                b[i] = 0;
            }

            for (int i = k; i >= 1; i--) {
                for (int j = n - 1; j >= 0; j--) {
                    if (a[j] <= i) {
                        b[i] = j + 1;
                        break;
                    }
                }
            }

            bool f = true;
            for (int i = 1; i <= k; i++) {
                if (b[i] < i + k - 1) {
                    f = false;
                    break;
                }
            }

            if (f) {
                ans = k;
            }
        }

        cout << ans << endl;
    }

    return 0;
}
