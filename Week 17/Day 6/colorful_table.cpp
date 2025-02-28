#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        
        vector<int> V1(n), V2(k);
        vector<vector<int>> V3(k + 7);
        vector<bool> V4(k);
        int l = n + 7, r = 0;

        int x;
        for (int i = 0; i < n; ++i) {
            cin >> x;
            --x;
            V3[x].push_back(i);
            V4[x] = 1;
        }

        for (int i = k - 1; i >= 0; --i) {
            for (int j = 0; j < V3[i].size(); ++j) {
                int& y = V3[i][j];
                l = min(l, y);
                r = max(r, y);
            }
            if (V4[i]) {
                V2[i] = (r - l + 1) * 2;
            }
        }

        for (int i = 0; i < V2.size(); ++i) {
            cout << V2[i] << ' ';
        }
        cout << '\n';
    }
}
