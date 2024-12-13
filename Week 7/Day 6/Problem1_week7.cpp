#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    long long t = 1;
    for (int i = 0; i < n; i++) {
        t *= 2;
    }

    bool r = false;

    for (long long m = 0; m < t; m++) {
        int s = 0;
        long long temp = m;
        for (int i = 0; i < n; i++) {
            int b = temp % 2;
            temp /= 2;
            if (b == 1) {
                s += a[i];
            } else {
                s -= a[i];
            }
        }
        s %= 360;
        if (s == 0) {
            r = true;
            break;
        }
    }

    if (r) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
