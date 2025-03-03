#include <bits/stdc++.h>

using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int a, b, c = 0, d, e = 0;
        cin >> a >> b;

        while (a--) {
            cin >> d;
            if (d >= b) {
                c += d;
            } else if (d == 0 && c > 0) {
                c -= 1;
                e += 1;
            }
        }
        cout << e << "\n";
    }
}
