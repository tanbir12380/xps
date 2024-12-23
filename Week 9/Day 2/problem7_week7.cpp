#include <bits/stdc++.h>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;
    int t = 0, d = 0, w = 0;

    for (int i = 0; i < a.length(); i++) {
        if (b[i] == '?') {
            d++;
        }
        if (a[i] == '+') {
            t++;
        } else {
            t--;
        }
        if (b[i] == '+') {
            t--;
        } else if (b[i] == '-') {
            t++;
        }
    }

    int total = 1;
    for (int i = 0; i < d; i++) {
        total *= 2;
    }

    for (int i = 0; i < total; i++) {
        int c = t, k = i;
        for (int j = 1; j <= d; j++) {
            if (k & 1) {
                c++;
            } else {
                c--;
            }
            k /= 2;
        }
        if (c == 0) {
            w++;
        }
    }

    cout << fixed << setprecision(12) << (w / double(total)) << endl;

    return 0;
}
