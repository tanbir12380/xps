#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        long long s = 0;
        for (int i = 0; i < n; i++) {
            long long a;
            cin >> a;
            if (i == n - 2) {
                s -= a;
            } else {
                s += a;
            }
        }
        cout << s << endl;
    }
}
