#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            a[i]--;
            b[i] = i;
        }

        if (n == 1) {
            cout << -1 << endl;
            continue;
        }

        for (int i = 0; i < n - 1; i++) {
            if (a[i] == b[i]) {
                swap(b[i], b[i + 1]);
            }
        }

        if (a[n - 1] == b[n - 1]) {
            swap(b[n - 1], b[n - 2]);
        }

        cout << (b[0] + 1);
        
        for (int i = 1; i < n; i++) {
            cout << " " << (b[i] + 1);
        }
        cout << endl;
    }

    return 0;
}
