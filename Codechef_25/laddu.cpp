#include <iostream>
using namespace std;

int main() {
  // your code goes here
  int t;
  cin >> t;

  while (t--) {
    int n, total = 0, x;
    string origin, temp;

    cin >> n >> origin;
    for (int i = 0; i < n; i++) {
      cin >> temp;

      if (temp == "CONTEST_WON") {
        cin >> x;
        if (x <= 20) {
          total = total + 300 + (20 - x);
        } else {
          total += 300;
        }
      } else if (temp == "TOP_CONTRIBUTOR") {
        total += 300;
      } else if (temp == "BUG_FOUND") {
        cin >> x;
        total = total + x;
      } else if (temp == "CONTEST_HOSTED") {
        total += 50;
      }
    }
    if (origin == "INDIAN")
      cout << (total / 200) << endl;
    else
      cout << (total / 400) << endl;
  }
  return 0;
}
