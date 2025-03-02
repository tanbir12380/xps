#include <bits/stdc++.h>
using namespace std;

int main() {

    int T;
    cin >> T;
    while (T--) {
        int n, k;
        cin >> n >> k;
        if (n == 1) {
            cout << 1 << endl << 1 << endl;
            continue;
        }
        if (k == 1 || k == n) {
            cout << "-1" << endl;
        } else {
            cout << "3" << endl;
            if (k % 2 == 0) {
                cout << 1 << " " << k << " " << k + 1 << endl;
            } else {
                cout << 1 << " " << k - 1 << " " << k + 2 << endl;
            }
        }
    }
}
