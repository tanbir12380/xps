#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> V(n);
        for (int i = 0; i < n; i++) {
            cin >> V[i];
        }
        int r = 5;
        if (k != 4) {
            for (int i = 0; i < n; i++) {
                if (V[i] % k == 0) {
                    r = 0;
                } else {
                    r = min(r, k - V[i] % k);
                }
            }
        } else {
            int e = 0;
            for (int i = 0; i < n; i++) {
                if (V[i] % 4 == 0) {
                    r = 0;
                } else if (V[i] % 2 == 0) {
                    e++;
                }
                r = min(r, k - V[i] % k);
            }
            r = min(r, max(0, 2 - e));
        }
        cout << r << endl;
    }
}
