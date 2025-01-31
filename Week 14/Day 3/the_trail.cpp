#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        string s;
        cin >> s;
        vector<vector<long long>> V1(n, vector<long long>(m));
        vector<long long> V2(n), V3(m);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> V1[i][j];
                V2[i] += V1[i][j];
                V3[j] += V1[i][j];
            }
        }
        int i = 0, j = 0;
        for (char c : s) {
            if (c == 'D') {
                V1[i][j] = -V2[i];
                V2[i] = 0;
                V3[j] += V1[i][j];
                i++;
            } else {
                V1[i][j] = -V3[j];
                V3[j] = 0;
                V2[i] += V1[i][j];
                j++;
            }
        }
        V1[n - 1][m - 1] = -V2[n - 1];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cout << V1[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
