#include <bits/stdc++.h>
using namespace std;

int main() {
  // your code goes here
  int t;
  cin >> t;
  ;

  while (t--) {
    int x;
    cin >> x;

    if (x % 5 != 0) {
      cout << -1 << endl;
    } else {
      int count = 0;

      while (x > 5) {
        count++;
        x = x - 10;
      }
      while (x > 0) {
        count++;
        x = x - 5;
      }

      cout << count << endl;
    }
  }

  return 0;
}