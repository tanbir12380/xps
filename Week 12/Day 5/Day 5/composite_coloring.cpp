#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<int> v = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int c = 0;
        map<int, int> m;
        vector<int> r(n);
        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            for (int j = 0; j < v.size(); j++) {
                if (a % v[j] == 0) {
                    if (!m.count(v[j])) {
                        m[v[j]] = ++c;
                    }
                    r[i] = m[v[j]];
                    break;
                }
            }
        }
        cout << c << '\n';
        for (int i = 0; i < n; i++) {
            cout << r[i] << ' ';
        }
        cout << endl;
    }
}
