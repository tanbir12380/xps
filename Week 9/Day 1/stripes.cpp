#include <bits/stdc++.h>
using namespace std;

int main() {


    int T;
    cin >> T;

    while (T--) {
        int r = 0;
        char a1[8][8];

        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                cin >> a1[i][j];
            }
        }

        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                if (a1[i][j] == 'R') {
                    r++;
                }
            }
            if (r == 8){
            break;
            }
            else {
            r = 0;
            }
        }

        if (r == 8) {
        cout << 'R' << "\n";
        }
        else {
        cout << 'B' << "\n";
        }
    }

    return 0;
}
