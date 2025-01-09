#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, p = -1, x, d, m;
        bool r = true;

        cin >> n;

        for (int i = 0; i < n; ++i) {
            cin >> x;
            d = x / 10;
            m = x % 10;

            if (p <= d && d <= m) {
                p = m;
            } else if (p <= x) {
                p = x;
            } else {
                r = false;
            }
        }

        if (r) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
