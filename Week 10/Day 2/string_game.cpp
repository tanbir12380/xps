#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int a;
    cin >> a;

    while (a--) {
        int b;
        cin >> b;
        string c;
        cin >> c;

        int d = 0; 
        for (int i = 0; i < b; i++) {
            if (c[i] == '1') {
                d++;
            }
        }

        int f = b - d; 
        int g = min(d, f);

        if (g % 2 == 0) {
            cout << "Ramos" << endl;
        } else {
            cout << "Zlatan" << endl;
        }
    }
}
