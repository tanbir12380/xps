#include <iostream>
using namespace std;

const int M = 1e9 + 7;

int main() {
    int n;
    cin >> n;
    while (n--) {
        long long a, b, r = 1;
        cin >> a >> b;
        a %= M;
        while (b > 0) {
            if (b % 2) r = (r * a) % M;
            a = (a * a) % M;
            b /= 2;
        }
        cout << r << '\n';
    }
    return 0;
}
