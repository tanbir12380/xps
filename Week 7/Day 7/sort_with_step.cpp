#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, b = 0;
        cin >> n >> k;
        for (int i = 0, x; i < n; i++) {
            cin >> x;
            int e, a;
            e = (i + 1) % k;
            a = x % k;
            if (e != a) {
                b++;
            }
        }
        if (b == 0) {
            cout << "0";
        } else if (b == 2) {
            cout << "1";
        } else {
            cout << "-1";
        }
        cout<<endl;
    }
}
