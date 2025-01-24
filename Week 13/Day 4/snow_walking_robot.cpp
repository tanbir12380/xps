#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string a;
        cin >> a;

        int b = 0, c = 0, d = 0, e = 0;

        for (int i = 0; i < a.size(); i++) {
            if (a[i] == 'R') {
                b++;
            }
            if (a[i] == 'L') {
                c++;
            }
            if (a[i] == 'U') {
                d++;
            }
            if (a[i] == 'D') {
                e++;
            }
        }

        int f = min(b, c);
        b = f;
        c = f;

        int g = min(d, e);
        d = g;
        e = g;

        if (b > 0 && d == 0) {
            b = 1;
            c = 1;
        }

        if (d > 0 && b == 0) {
            d = 1;
            e = 1;
        }

        int h = b + c + d + e;
        cout << h << endl;

        for (int i = 0; i < h; i++) {
            if (b) {
                cout << "R";
                b--;
            } else if (d) {
                cout << "U";
                d--;
            } else if (c) {
                cout << "L";
                c--;
            } else if (e) {
                cout << "D";
                e--;
            }
        }
        cout << endl;
    }

    return 0;
}
