#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
    while (a--) {
        long long b, c, d, e, f;
        cin >> b >> c;

         d = c / (b - 1);
         e = c % (b - 1);
         f = d * b + e;

        if (e == 0) {
            f--;
        }

        cout << f << endl;
    }
    return 0;
}
