#include <iostream>
#include <string>
using namespace std;
int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;
        int a = 0, b = 0, c = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '0') {
                a++;
            } else if (s[i] == '1') {
                b++;
            }
        }
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '1') {
                if (a > 0) {
                    a--;
                } else {
                    c = s.size() - i;
                    break;
                }
            } else if (s[i] == '0') {
                if (b > 0) {
                    b--;
                } else {
                    c = s.size() - i;
                    break;
                }
            }
        }
        cout << c << endl;
    }

    return 0;
}
