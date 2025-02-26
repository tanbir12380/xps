#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> V(n + 1);
        for (int i = 1; i <= n; i++) {
            cin >> V[i];
        }

        int r = 0;
        bool b = true;

        for (int i = 1; i <= n; i = r + 1) {
            if (r == 0) r = 1;
            else r *= 2;

            for (int j = i + 1; j <= r && j <= n; j++) {
                if (V[j] < V[j - 1]) {
                    cout << "NO" << endl;
                    b = false;
                    break;
                }
            }

            if (!b) {
            break;
           }
        }

        if (b) {
            cout << "YES" << endl;
        }
    }

    return 0;
}
