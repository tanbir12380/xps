#include<bits/stdc++.h>
using namespace std;

bool vad( vector<int> a, int n, int k, int m) {
    long long f = 0;
    for (int c = n / 2; c < n; c++) {
        if (a[c] < m) {
            f += m - a[c];
        }
    }
    return f <= k;
}

int main() {

    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int b = 0; b < n; b++) {
        cin >> a[b];
    }
    
    sort(a.begin(), a.end());

    int l = 1, r = 2e9, m, g;
    while (l <= r) {
        m = l + (r - l) / 2;
        if (vad(a, n, k, m)) {
            g = m;
            l = m + 1;
        } else {
            r = m - 1;
        }
    }
  cout << g << endl;
}
