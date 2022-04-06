#include <iostream>
#include <math.h>
using namespace std;

#define ll long long;

int main() {
  // your code goes here

  int t, n;
  float x;
  cin >> t;

  while (t--) {
    cin >> n;
    x = pow(0.143 * n, n);
    if (x - floor(x) < 0.5)
      cout << floor(x) << "\n";
    else
      cout << floor(x) + 1 << "\n";
  }

  return 0;
}
