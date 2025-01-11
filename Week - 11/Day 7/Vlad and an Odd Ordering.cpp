#include <bits/stdc++.h>
using namespace std;

int clc(int a, int b)
{
    int c = (a + 1) / 2;
    int d;
    if (b <= c) {
        d = b * 2 - 1;
    } else {
        int e = b - c;
        int f = a / 2;
        d = 2 * clc(f, e);
    }
    return d;
}

int main()
{


    int g;
    cin >> g;
    while (g--) {
        int h, i;
        cin >> h >> i;

        cout << clc(h, i) << endl;
    }

    return 0;
}

