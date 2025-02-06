#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> V(n);
    for (int i = 0; i < n; i++) {
        cin >> V[i];
    }
    map<int, int> M;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int o = V[i] + V[j];
            M[o]++;
        }
    }
    int m = 0;
    for (auto it = M.begin(); it != M.end(); it++) {
        m = max(m, it->second);
    }
    cout << m << endl;
}
