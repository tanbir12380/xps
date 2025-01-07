#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        long long c = 0;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (x == 1) {
                c--;
            } else {
                c += (x - 1);
            }
        }

        if (n > 1 && c >= 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
