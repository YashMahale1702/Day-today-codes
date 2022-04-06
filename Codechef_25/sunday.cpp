#include <bits/stdc++.h>
using namespace std;

int main() {
  // your code goes here
  int t;
  cin >> t;

  while (t--) {
    unordered_set<int> setHolidays{6, 13, 20, 27, 7, 14, 21, 28};
    int temp, n;
    cin >> n;

    for (int i = 0; i < n; i++) {
      cin >> temp;
      // cout << temp<<"\n";
      setHolidays.insert(temp);
    }

    cout << setHolidays.size() << endl;
  }

  return 0;
}
