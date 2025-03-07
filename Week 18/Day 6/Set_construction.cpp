#include <bits/stdc++.h>
using namespace std;

int main() {
    long long T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<int> V[n + 1];
        for (int i = 1; i <= n; i++) {
            string s;
            cin >> s;
            for (int j = 0; j < n; j++) {
                if (s[j] == '1') {
                    V[j + 1].push_back(i);
                }
            }
        }
        for (int i = 1; i <= n; i++) {
            cout << V[i].size() + 1 << " " << i << " ";
            for (int j = 0; j < V[i].size(); j++) {
                cout << V[i][j] << " ";
            }
            cout << endl;
        }
    }
}
