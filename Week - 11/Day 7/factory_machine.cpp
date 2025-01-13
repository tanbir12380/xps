#include <bits/stdc++.h>
using namespace std;

bool f(long long x, vector<int> b, int c) {
    long long d = 0;
    for (int e = 0; e < b.size(); e++) {
        d += (x / b[e]);
        if (d >= c) {
            return true;
        }
    }
    return false;
}

int main() {

    int g, h;
    cin >> g >> h;
    vector<int> i(g);
    for (int j = 0; j < g; j++) {
        cin >> i[j];
    }

    long long k = 1, l = 1e18, m, n;
    while (k <= l) {
        m = k + (l - k) / 2;
        if (f(m, i, h)) {
            n = m;
            l = m - 1;
        } else {
            k = m + 1;
        }
    }

    cout << n << endl;
}