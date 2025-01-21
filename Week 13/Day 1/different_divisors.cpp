#include <bits/stdc++.h>
using namespace std;
vector<bool> V(10000002, false);

int main() {
    int T, d;
    cin >> T;
    
    for (int i = 2; i < 10000002; i++) {
        if (!V[i]) {
            for (int j = 2; i * j < 10000002; j++) {
                V[i * j] = true;
            }
        }
    }

    while (T--) {
        cin >> d;
        int e, f;

        int i = d + 1;
        while (true) {
            if (!V[i]) {
                e = i;
                break;
            }
            i++;
        }

        int j = e + d;
        while (true) {
            if (!V[j]) {
                f = j;
                break;
            }
            j++;
        }

        cout << e * f << endl;
    }

    return 0;
}

