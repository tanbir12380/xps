#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int l, r;
        cin >> l >> r;

        if (r < 4) {
            cout << "-1" << endl;
            continue;
        }

        if (l == r) {
            int a = -1;
            for (int i = 2; i * i <= r; ++i) {
                if ((r - i) % i == 0) {
                    a = i;
                    break;
                }
            }

            if (a > 0) {
                int b = r - a;
                cout << a << " " << b << endl;
            } else {
                cout << "-1" << endl;
            }
        } else {
            int a = r - r % 2;
            int b = a - 2;
            cout << "2 " << b << endl;
        }
    }

    return 0;
}
