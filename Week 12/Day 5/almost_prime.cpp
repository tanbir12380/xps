#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b = 0;
    cin >> a;

    vector<bool> c(a + 1, false);
    vector<int> d(a + 1, 0);

    for (int i = 2; i <= a; i++) {
        if (!c[i]) {
            for (int j = i + i; j <= a; j += i) {
                c[j] = true;
                d[j] += 1;
            }
        }

        if (d[i] == 2) {
            b += 1;
        }
    }

    cout << b << endl;
    return 0;
}
