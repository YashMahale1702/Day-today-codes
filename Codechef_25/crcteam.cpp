#include <bits/stdc++.h>
using namespace std;

int main() {
  // your code goes here
  int t;
  cin >> t;

  while (t--) {
    int n, even = 0, odd = 0;
    cin >> n;

    for (int i = 1; i <= n; i++) {
      if (n % i == 0) {
        if (i % 2 == 0)
          even++;
        else
          odd++;
      }
    }

    if (even == odd) {
      cout << "1" << endl;
    } else {
      cout << "0" << endl;
    }
  }

  return 0;
}
