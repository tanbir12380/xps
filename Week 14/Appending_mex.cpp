#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a, b = -1;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cin >> a;
        if (a > b + 1) {
            cout << i << endl;
            return 0;
        }
        b = max(b, a);
    }

    cout << "-1" << endl;
    return 0;
}
