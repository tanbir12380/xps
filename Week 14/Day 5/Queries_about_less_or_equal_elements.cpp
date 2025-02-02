#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }

    sort(a.begin(), a.end());

    for (int i = 0; i < m; i++) {
        int l = 0, r = n - 1, c = 0;
        while (l <= r) {
            int s = (l + r) / 2;
            if (a[s] <= b[i]) {
                c = s + 1;
                l = s + 1;
            } else {
                r = s - 1;
            }
        }
        cout << c << " ";
    }
} 

