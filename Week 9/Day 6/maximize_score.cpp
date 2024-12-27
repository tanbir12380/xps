#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n , op = INT_MAX;
        cin >> n;
        vector<int> A(n);
        for (int i = 0; i < n; i++) {
            cin >> A[i];
        }

        vector<int> d(n - 1);
        for (int i = 0; i < n - 1; i++) {
            if (A[i] > A[i + 1]) {
                d[i] = A[i] - A[i + 1];
            } else {
                d[i] = A[i + 1] - A[i];
            }
        }

        if (n >= 2) {
            op = min(op, d[0]);
        }

        for (int i = 1; i < n - 1; i++) {
            op = min(op, max(d[i - 1], d[i]));
        }

        if (n > 2) {
            op = min(op, d[n - 2]);
        }

        cout << op << endl;
    }
}
