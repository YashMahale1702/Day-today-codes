#include <bits/stdc++.h>
using namespace std;

int count_set_bits(int x) {
  int count = 0;
  while (x > 0) {
    count += (x & 1);
    x = x >> 1;
  }
  return count;
}

int main() {
  int n;
  cin >> n;
  cout << "No of bits set in " << n << " are " << count_set_bits(n);

  return 0;
}