#include <iostream>
using namespace std;

int main() {
  // your code goes
  int t;
  cin >> t;

  while (t--) {
    int n, i, j;
    int arr[2] = {0};
    string s;
    cin >> n >> s;

    for (i = 0; i < n; i++) {
      if (s[i] == '0')
        arr[0]++;
      else if (s[i] == '1')
        arr[1]++;
    }

    // both are equal
    if (arr[0] == arr[1])
      cout << "YES" << endl;

    // n, o's 1's count is even
    else if (n % 2 == 0 && arr[0] % 2 == 0 && arr[1] % 2 == 0)
      cout << "YES" << endl;

    // if either one is all zeros or all ones
    else if (arr[1] == 0 || arr[0] == 0)
      cout << "YES" << endl;

    // if odd palindrome always yes
    else if (n % 2 != 0)
      cout << "YES" << endl;

    else
      cout << "NO" << endl;
  }
  return 0;
}
