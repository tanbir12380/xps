#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, a, b, c;
        long long m;
        cin >> n >> m;
        a = 0, b = 1e9;
        for (int i = 0; i < n; i++) {
            cin >> c;
            m -= c + 1;
            a = max(a, c);
            b = min(b, c);
        }
        m -= a - b;
        if (m < 0) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
}
