#include <bits/stdc++.h>
using namespace std;

int main() {
  // your code goes here
  int t;
  cin >> t;

  while (t--) {
    int n, x, cost = 0;
    cin >> n >> x;

    while (n >= 3) {
      n = n - 3;
      cost = cost + (x * 2);
    }

    if (n == 1) {
      cost = cost + x;
    } else if (n == 2) {
      cost = cost + (x * 2);
    }

    cout << cost << endl;
  }

  return 0;
}
