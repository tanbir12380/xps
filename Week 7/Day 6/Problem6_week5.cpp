#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        long long m;
        cin >> n >> m;

        if (n > m) {
            cout << "NO" << endl;
            continue;
        } else if (n % 2 == 0 && m % 2 == 1) {
            cout << "NO" << endl;
            continue;
        } else if (n == 1) {
            cout << "YES" << endl;
            cout << m << endl;
            continue;
        }

        cout << "YES" << endl;
        for (int i = 0; i < n - 2; i++) {
            cout << "1 ";
        }

        if (n % 2 == 1) {
            cout << "1 " << m - n + 1 << endl;
        } else {
            long long h = (m - n + 2) / 2;
            cout << h << " " << h << endl;
        }
    }

    return 0;
}
