#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        long long n;
        cin >> n;
        vector<long long> V(n);
        
        for (int i = 0; i < n; i++) {
            cin >> V[i];
        }
        
        if (n <= 2) {
            cout << -1 << endl;
            continue;
        }
        
        long long a = 0, b = 0;
        for (int i = 0; i < n; i++) {
            a += V[i];
            b = max(b, V[i]);
        }
        
        long long c = 0, d = LLONG_MAX;
        long long e = -1;
        
        while (c <= d) {
            long long g = (c + d) / 2;
            int f = 0;
            
            for (int i = 0; i < n; i++) {
                if (2 * V[i] * n < a + g) {
                    f++;
                }
            }
            
            if (f > n / 2) {
                e = g;
                d = g - 1;
            } else {
                c = g + 1;
            }
        }
        
        cout << e << endl;
    }
}
