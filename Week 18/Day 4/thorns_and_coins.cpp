#include<bits/stdc++.h>
using namespace std;

int main() {

    int T; 
    cin >> T; 
    while (T--) {
        int n; 
        cin >> n;
        string s; 
        cin >> s;
        s = " " + s;

        int x = 0, y = 0;
        for (int i = 1; i <= n; i++) {
            if (s[i] != '*') {
                y = 0;
            }
            else {
                if (y + 1 > 1) {
                    break;
                }
                y++;
            }

            if (s[i] == '@') {
                x++;
            }
        }

        cout << x << endl;
    }
}
