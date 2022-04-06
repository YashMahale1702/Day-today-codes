#include <iostream>
#include <string>

using namespace std;

int main() {
  // your code goes here
  int t, n, k, count, i, j;
  string s;

  cin >> t;
  while (t--) {
    cin >> n >> k >> s;

    for (i = 0, j = n - 1; i <= j; i++, j--) {
      if (s[i] != s[j])
        k--;
    }

    // even and even multiples
    if (k >= 0 && n % 2 == 0 && k % 2 == 0) {
      cout << "YES" << endl;
    }
    // odd , k can be anything even or odd
    else if (k >= 0 && n % 2 == 1) {
      cout << "YES" << endl;
    } else
      cout << "NO" << endl;
  }

  return 0;
}