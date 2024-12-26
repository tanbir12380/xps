#include <bits/stdc++.h>

using namespace std;

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int b[n];
        int c, d;
        for (int i = 0; i < n; ++i) {
            cin >> b[i];
            if (i == 0) {
                c = b[i];
                d = b[i];
            } else {
                c |= b[i];
                d &= b[i];
            }
        }
        cout << c - d << endl;
    }
}
