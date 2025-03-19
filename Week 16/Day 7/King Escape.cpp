#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a, b, c, d, e, f;
    cin >> n >> a >> b >> c >> d >> e >> f;

    bool b1 = (c < a);
    bool b2 = (c > a);
    bool b3 = (d < b);
    bool b4 = (d > b);
    bool b5 = (e < a);
    bool b6 = (e > a);
    bool b7 = (f < b);
    bool b8 = (f > b);

    if ((b1 && b3 && b5 && b7) || (b1 && b4 && b5 && b8) || (b2 && b4 && b6 && b8) || (b2 && b3 && b6 && b7)) {
        cout << "YES";
}
    else {
        cout << "NO";
}

    return 0;
}
