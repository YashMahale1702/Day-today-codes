#include <bits/stdc++.h>
using namespace std;

int main() {
  // your code goes here
  int t;
  cin >> t;

  while (t--) {
    int n, count = 0;
    string str;
    cin >> n;
    cin.get();
    getline(cin, str);

    for (int i = 0; i < n;) {
      if (str[i] == str[i + 1]) {
        count++;
        i += 2;
      } else {
        count++;
        i++;
      }
    }

    cout << count << endl;
  }

  return 0;
}
