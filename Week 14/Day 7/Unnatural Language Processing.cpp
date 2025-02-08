#include bitsstdc++.h
using namespace std;

int main() {

    int T;
    cin  T;

    while (T--) {
        int n;
        string s;
        cin  n  s;

        vectorstring V;

        for (int i = n - 1; i = 0; i--) {
            if (s[i] == 'a'  s[i] == 'e') {
                string t;
                t += s[i - 1];
                t += s[i];
                V.push_back(t);
                i--;
            } else {
                string t;
                t += s[i - 2];
                t += s[i - 1];
                t += s[i];
                V.push_back(t);
                i -= 2;
            }
        }

        int z = V.size();
        for (int i = z - 1; i = 0; i--) {
            cout  V[i];
            if (i != 0) {
                cout  .;
            }
        }
        cout  endl;
    }

}
