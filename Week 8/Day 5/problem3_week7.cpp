#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        int freq[31] = {0};

        for (int i = 0; i < a; i++) {
            int num;
            cin >> num;
            for (int j = 0; j < 31; j++) {
                if (num & 1) {
                    freq[j]++;
                }
                num >>= 1;
            }
        }

        int result = 0;
        for (int j = 30; j >= 0; j--) {
            if (freq[j] + b >= a) {
                result += (1 << j);
                b -= (a - freq[j]);
            }
        }

        cout << result << "\n";
    }
}
