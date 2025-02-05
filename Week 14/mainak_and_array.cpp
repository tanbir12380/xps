#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> V1(n);
        vector<int> V2(2 * n);
        int x = INT_MIN;
        int y = INT_MIN;
        int z = INT_MAX;
        for (int i = 0; i < n; i++) {
            cin >> V1[i];
            y = max(y, V1[i]);
            z = min(z, V1[i]);
        }
        for (int i = 0; i < 2 * n; i++) {
            V2[i] = V1[i % n];
        }
        for (int i = n; i < 2 * n; i++) {
            x = max(x, V2[i] - V2[i - n + 1]);
        }
        x = max(x, y - V1[0]);
        x = max(x, V1[n - 1] - z);
        cout << x << endl;
    }

}
