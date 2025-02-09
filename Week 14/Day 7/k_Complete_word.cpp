#include <bits/stdc++.h>
using namespace std;

const int M = 26;

int C[M];

int f(int a[], int b) {
    int c = 0;
    for (int i = 0; i < b; i++) {
        c += a[i];
    }
    return c;
}

int g(int a[], int b) {
    int c = a[0];
    for (int i = 1; i < b; i++) {
        if (a[i] > c) {
            c = a[i];
        }
    }
    return c;
}

int main() {
    int a;
    cin >> a;
    while (a--) {
        int b, c;
        cin >> b >> c;
        string s;
        cin >> s;
        int R = 0;

        for (int i = 0, j = c - 1; i <= j; i++, j--) {
            memset(C, 0, sizeof(C));
            for (int k = 0; k < b / c; k++) {
                C[s[k * c + i] - 'a']++;
                if (i != j) {
                    C[s[k * c + j] - 'a']++;
                }
            }

            int sum = f(C, M);
            sum -= g(C, M);
            R += sum;
        }

        cout << R << endl;
    }
}
