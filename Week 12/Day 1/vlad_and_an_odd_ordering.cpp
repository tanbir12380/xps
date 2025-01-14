#include<bits/stdc++.h>
using namespace std;

int main() {

    int t ;
    cin >> t;
    while (t--) {
        int n, k, a, b;
        cin >> n >> k;

        a = (n + 1) / 2;
        b = 2;

        if (k <= a) {
            cout << 2 * k - 1 << endl;
        } else {
            while (b <= n) {
                int c = n / b;
                int d = (c + 1) / 2;
                a += d;
                if (a >= k) {
                    int e = d - (a - k);
                    cout << (2 * e - 1) * b << endl;
                    break;
                }
                b *= 2;
            }
        }
    }
    return 0;
}
