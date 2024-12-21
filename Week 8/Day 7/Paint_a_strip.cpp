#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
    while (a--) {
        int b, x = 1;
        cin >> b;
        int d = 1;
        for (int c = 1; x < b; c++) {
            x = 2 * x + 2;
            d = c + 1;
        }
        cout << d << endl;
    }
}
