#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    long long a, b, c, d, e, f, g;
    long long h = 0;
    cin >> a;
    vector<long long> V(a);

    for (auto &b : V)
        cin >> b;
    for (int i = 0; i < a; i++) {
        cin >> b;
        V[i] -= b;
    }
    sort(V.begin(), V.end());
    for (int i = 0; i < a; i++) {
        d = V[i];
        if (d > 0) {
            h += a - 1 - i;
            continue;
        }
        e = 1 - d;
        if (V[a - 1] < e) {
            continue;
        }
        f = i + 1;
        g = a - 1;
        while (f < g) {
            int j = (f + g) / 2;
            if (V[j] >= e) {
                g = j;
            }
            else {
                f = j + 1;
            }
        }
        h += (a - f);
    }
    cout << h << endl;
}
