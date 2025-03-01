#include <bits/stdc++.h>
using namespace std;
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n, m, a = 0, b = 0, c = 0;
        cin >> n >> m;
        vector<long long> V1(n), V2(n);
        V1[0] = 1;
        for (int i = 1; i < n; i++) {
            cin >> V1[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> V2[i];
        }
        sort(V1.begin(), V1.end());
        sort(V2.begin(), V2.end());
        while (b < n && a < n) {
            if (V1[a] < V2[b]) {
                a++;
                b++;
            } else {
                c++;
                b++;
            }
        }
        c += (n - b) + (n - a);
        cout << (c / 2) << endl;
    }
}