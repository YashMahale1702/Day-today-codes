#include <bits/stdc++.h>
using namespace std;

int main() {
  // your code goes here
  int t;
  cin >> t;

  while (t--) {
    string str;
    cin >> str;
    int temp = stoi(str), max = 0, rem;

    while (temp > 0) {
      rem = temp % 10;
      if (rem > max)
        max = rem;
      temp /= 10;
    }
    cout << max << endl;
  }

  return 0;
}
