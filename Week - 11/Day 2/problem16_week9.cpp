#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long a, b, c;
        cin >> a >> b >> c;

        while (c && a != 1) {
            long long d = a / b;
            long long e = (d + 1) * b;
            long long f = e - a;

            if (f == 0) {
                f = 1;
            }
            if (f > c) {
                f = c;
            }

            a += f;
            while (a % b == 0) {
                a /= b;
            }

            c -= f;
        }
        b--;
        long long g = a + c % b;
        cout << g << endl;
    }
    return 0;
}
