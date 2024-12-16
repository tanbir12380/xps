#include <iostream>

using namespace std;

int main() {
    int n; cin >> n;

    for (int i = 0; i < n; i++) {
        if (i % 4 == 2 || i % 4 == 3) cout << 'b';
        else cout << 'a';
    }

    cout << endl;

    return 0;
}
