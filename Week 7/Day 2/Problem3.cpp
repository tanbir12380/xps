
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int m;
        long long r = 0;
        cin >> m;
        for (int i = 0; i < m; i++) {
            long long y;
            cin >> y;
            r ^= y;
        }
        if (m % 2) {
            cout << r << endl;
        } else {
            if (r != 0) {
                cout << -1 << endl;
            } else {
                cout << 0 << endl;
            }
        }
    }
}
