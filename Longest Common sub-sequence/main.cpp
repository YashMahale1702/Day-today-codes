#include <bits/stdc++.h>

using namespace std;

int max(int a, int b) { return a > b ? a : b; }

int main() {
  string s1, s2;

  getline(cin, s1);
  getline(cin, s2);

  int table[s1.length() + 1][s2.length() + 1];

  cout << s1.length() << " " << s2.length() << "\n";
  //   init to 0
  memset(table, 0, sizeof(table));

  for (int i = 1; i <= s1.length(); i++) {
    for (int j = 1; j <= s2.length(); j++) {

      //   if the char matches
      if (s1[i - 1] == s2[j - 1]) {
        table[i][j] = table[i - 1][j - 1] + 1;
      }
      //   Don't match then find max of diagonal
      else {
        table[i][j] = max(table[i - 1][j], table[i][j - 1]);
      }
    }
  }

  for (int i = 0; i <= s1.length(); i++) {
    for (int j = 0; j <= s2.length(); j++) {
      cout << table[i][j] << " ";
    }
    cout << "\n";
  }

  return 0;
}