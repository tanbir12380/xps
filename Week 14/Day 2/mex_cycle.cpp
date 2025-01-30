#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, a, b;
        cin >> n >> a >> b;
        a--;
        b--;

        vector<int> V(n, -1);

        if (n % 2 == 1) {
            for (int i = 1; i < n; i++) {
                int p = (a + i) % n;
                int v = i % 2;
                V[p] = v;
            }
            V[a] = 2;
        } else {
            for (int i = 0; i < n; i++) {
                bool c = (i == a && a % 2 == b % 2);
                if (c) {
                    V[i] = 2;
                } else {
                    int v = i % 2;
                    V[i] = v;
                }
            }
        }

        for (int i = 0; i < n; i++) {
            cout << V[i] << " ";
        }
        cout << endl;
    }
}
