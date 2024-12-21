#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int p = 0; p < n; p++) {
            cin >> a[p];
        }
        sort(a, a + n);
        cout << a[n / 2] << endl;
    }
}
