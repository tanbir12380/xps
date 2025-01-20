#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        sort(v.begin(), v.end());

        if (v[0] != v[1]) {
            cout << "YES" << endl;
        } else {
            bool flag = 0;
            for (int i = 0; i < n; i++) {
                if (v[i] % v[0] != 0) {
                    flag = true;
                    break;
                }
            }

            if (flag) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}
