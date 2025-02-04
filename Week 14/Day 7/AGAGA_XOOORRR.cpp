#include <bits/stdc++.h>

using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> V(n);
        for (int i = 0; i < n; i++) {
            cin >> V[i];
        }

        int r = 0, x = 0;
        for (int i = 0; i + 1 < n; i++) {
            x ^= V[i];
            int y = 0, z = 0;
            for (int j = i + 1; j < n; j++) {
                y ^= V[j];
                if (y == x) {
                    y = 0;
                    z = 1;
                }
            }
            if (y == 0 && z == 1) {
                r = 1;
            }
        }
        if (r == 1) {
            cout << "YES";
        } else {
            cout << "NO";
        }
        cout<<endl;
    }
}
