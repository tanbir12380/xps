#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string a, b;
        cin >> a >> b;

        if (a[0] == b[0]) {
            cout << "Yes\n" << a[0] << "*\n";
            continue;
        }

        if (a.back() == b.back()) {
            cout << "Yes\n*" << a.back() << "\n";
            continue;
        }

        bool found = false;
        for (int i = 0; i < a.size() - 1; i++) {
            for (int j = 0; j < b.size() - 1; j++) {
                if (a[i] == b[j] && a[i + 1] == b[j + 1]) {
                    cout << "Yes\n*" << a[i] << a[i + 1] << "*\n";
                    found = true;
                    break;
                }
            }
            if (found) {
                break;
            }
        }

        if (!found) {
            cout << "No\n";
        }
    }
}
