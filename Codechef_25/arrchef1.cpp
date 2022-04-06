#include <bits/stdc++.h>
using namespace std;

int main() {
  // your code goes here]
  int t;
  cin >> t;

  while (t--) {
    int temp, n, carry = 1;
    cin >> n;
    vector<int> vect(n + 1, 0);

    for (int i = 1; i <= n; i++) {
      cin >> vect[i];
    }

    for (int i = n; i >= 0; i--) {
      if (vect[i] == 9 && carry == 1) {
        vect[i] = 0;
        carry = 1;
      } else if (carry == 1) {
        vect[i]++;
        carry = 0;
      }
    }

    if (vect[0] != 0) {
      cout << vect[0] << " ";
    }

    for (int i = 1; i <= n; i++) {
      cout << vect[i] << " ";
    }
    cout << endl;
  }

  return 0;
}