#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        vector<long long> V(n);
        for (int i = 0; i < n; ++i) {
            cin >> V[i];
        }
        sort(V.begin(), V.end());
        priority_queue<long long> P;
        long long S = 0;
        for (int i = 0; i < n; ++i) {
            S += V[i];
        }
        P.push(S);
        int i = n - 1;
        while (!P.empty()) {
            long long c = P.top();
            P.pop();
            if (c < V[i]) {
                break;
            }
            if (c == V[i]) {
                --i;
            } else {
                P.push(c / 2);
                P.push(c - c / 2);
            }
        }
        if (i < 0) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
