#include <iostream>
#include <string>

using namespace std;

int main() {
  int t, i, j, n;
  cin >> t;

  //   using hashing array

  while (t--) {
    string str;
    int flag = 0;
    int hash[26] = {0};
    cin >> str;
    n = str.size();

    if (n % 2 == 0) {
      for (i = 0, j = (n / 2); i < (n / 2); i++, j++) {
        hash[str[i] - 97]++;
        hash[str[j] - 97]--;
      }

    } else {

      for (i = 0, j = ((n / 2) + 1); i < (n / 2); i++, j++) {
        hash[str[i] - 97]++;
        hash[str[j] - 97]--;
      }
    }

    for (i = 0; i < 26; i++) {
      if (hash[i] != 0) {
        cout << "NO\n";
        flag = 1;
        break;
      }
    }

    if (flag == 0) {
      cout << "YES\n";
    }
  }

  return 0;
}