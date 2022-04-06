#include <bits/stdc++.h>
using namespace std;

int main() {
  // your code goes here
  int t;
  cin >> t;

  while (t--) {
    int n, w, temp, count = 0, sum = 0;
    cin >> n >> w;
    vector<int> vect(n);

    for (int i = 0; i < n; i++) {
      cin >> vect[i];
    }

    sort(vect.begin(), vect.end());

    for (int i = n - 1; i >= 0; i--) {
      // cout << vect[i] << endl;
      sum += vect[i];
      count++;
      if (sum >= w)
        break;
    }

    cout << (n - count) << endl;
  }

  return 0;
}
