#include <bits/stdc++.h>
using namespace std;

const int N = 4005;
vector<int> V[N];
string S;
int X;

int func(int n, int m) {
  int Y;
  if (S[n] == 'B') {
    Y = 1;
  } else {
    Y = -1;
  }
  
  for (int i = 0; i < V[n].size(); i++) {
    int v = V[n][i];
    if (v == m) {
      continue;
    }
    Y += func(v, n);
  }

  if (Y == 0) {
    X++;
  }
  return Y;
}

int main() {
  int T;
  cin >> T;
  while (T--) {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
      V[i].clear();
    }
    for (int i = 1; i < n; i++) {
      int j;
      cin >> j;
      j--;
      V[j].push_back(i);
    }
    cin >> S;

    X = 0;
    func(0, -1);
    cout << X << endl;
  }
}
