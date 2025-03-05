#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long a = 0;
        long long b = LONG_LONG_MAX;
        vector<long long> V;
        for (int i = 0; i < n; i++) {
            long long x, y;
            cin >> x >> y;
            if (x == 1) {
                a = max(a, y);
            }
            else if (x == 2) {
                b = min(b, y);
            }
            else {
                V.push_back(y);
            }
        }
        long long c = b - a + 1;
        for (int i = 0; i < V.size(); i++) {
            if (V[i] >= a && V[i] <= b) {
                c--;
            }
        }
        cout << max(c, 0ll) << endl;
    }
}
