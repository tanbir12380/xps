#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    int a;
    cin >> a;
    while (a--) {
        int b;
        cin >> b;
        string c;
        cin >> c;
        int d = 0;
        int e = b / 2;
        for (int f = 0; f < e; f++) {
            char g = c[f];
            char h = c[b - f - 1];
            d += (g != h);
        }
        vector<char> i(b + 1, '0');
        int j = d;
        int k = b;
        for (int f = j; f + j <= k; f++) {
            bool l = (b % 2);
            bool m = ((f - j) % 2 == 0);
            if (l || m) {
                i[f] = '1';
            }
        }
        for (char n : i) {
            cout << n;
        }
        cout << endl;
    }
    return 0;
}
