#include <iostream>
using namespace std;

long long gcd(long long a, long long b) {
    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    long long x;
    cin >> x;

    long long a = 1, b = x;

    for (long long i = 1; i * i <= x; i++) {
        if (x % i != 0) {
            continue;
        }
        long long q = x / i;

        if (gcd(i, q) == 1) {
            if (max(a, b) > max(i, q)) {
                a = i;
                b = q;
            }
        }
    }

    cout << a << " " << b << endl;
}
