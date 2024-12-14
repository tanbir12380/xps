#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        long long a[n + 1];
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }
        int m = 3;
        for (int i = 1; i <= n; i++) {
            if (a[i] == 0) {
                continue;
            }
            int cur = i, c = 0;
            while (a[cur] != 0) {
                c++;
                int next = a[cur];
                a[cur] = 0;
                cur = next;
            }
            if (c < m) {
                m = c;
            }
        }
        cout << m << endl;
    }
}
