#include <bits/stdc++.h>
using namespace std;

int main() {
    int a;
    cin >> a;
    while (a--) {
        int b;
        cin >> b;
        string c, d;
        cin >> c >> d;

        bool e = true;
        for (int i = 0; i < b; i++) {
            if (c[i] == '1') {
                break;
            }
            if (d[i] == '1') {
                e = false;
                break;
            }
        }

        if (e) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}
