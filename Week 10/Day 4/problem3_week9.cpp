#include <iostream>
using namespace std;

long long fun(long long a, long long b) {
    while (b != 0) {
        long long t = b;
        b = a % b;
        a = t;
    }
    return a;
}

int main() {
    long long n, a, b, p, q;
    long long i, j, k, l, m;

    cin >> n >> a >> b >> p >> q;

    i = n / a;
    j = n / b;

    l = (a * b) / fun(a, b);
    k = n / l;

    i -= k;
    j -= k;

    if (p > q) {
        m = (i * p) + (j * q) + (p * k);
    } else {
        m = (i * p) + (j * q) + (q * k);
    }

    cout << m;

    return 0;
}
