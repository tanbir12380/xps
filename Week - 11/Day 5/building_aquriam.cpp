#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        long long x;
        cin >> n >> x;
        vector<long long> a(n);
        for (int p = 0; p < n; p++) {
            cin >> a[p];
        }

        long long l = 0, r = 2e9 + 1, s = 0;
        while (l <= r) {
            long long m = (l + r) / 2;
            long long v = 0;
            for (int p = 0; p < n; p++) {
                if (m > a[p]) {
                    v += (m - a[p]);
                }
            }

            if (v <= x) {
                s = m;
                l = m + 1;
            } else {
                r = m - 1;
            }
        }

        cout << s << endl;
    }

    return 0;
}
