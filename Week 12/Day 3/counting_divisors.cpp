#include <bits/stdc++.h>
using namespace std;
const int n = 1e6 + 1;

int main() {
    vector<int> v(n);
    for (int i = 1; i < n; i++) {
        for (int j = i; j < n; j += i) {
            v[j]++;
        }
    }

    int t;
    cin >> t;
    while (t--) {
        int x;
        cin >> x;
        cout << v[x] << endl;
    }

    return 0;
}
