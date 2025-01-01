#include <iostream>

using namespace std;

int main() {
    long long n;
    cin >> n;

    long long a = 0;

    if (n <= 1) {
        a = 0;
    } else {
        bool b = true;
        for (int c = 2; c * c <= n; c++) {
            if (n % c == 0) {
                b = false;
                break;
            }
        }

        if (b) {
            a = 1;
        } else if (n % 2 == 0) {
            a = 2;
        } else if ((n % 2) && n > 2) {
            bool d = true;
            for (int e = 2; e * e <= n - 2; e++) {
                if ((n - 2) % e == 0) {
                    d = false;
                    break;
                }
            }
            if (d) {
                a = 2;
            } else {
                a = 3;
            }
        }
    }

    cout << a << endl;

    return 0;
}
