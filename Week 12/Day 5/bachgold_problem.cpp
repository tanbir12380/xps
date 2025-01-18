#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    bool t = false;
    if (n % 2) {
        t = true;
        n -= 3;
    }
    int x = n / 2;
    int c = x + t;
    cout << c << endl;
    while (x--) {
        cout << "2 ";
    }
    if (t) {
        cout << "3";
    }
    cout << endl;
    return 0;
}
