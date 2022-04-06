#include <bits/stdc++.h>
using namespace std;

int main() {
  // your code goes here
  int t;
  cin >> t;

  while (t--) {
    int x, a, b, c, sum = 0, count = 2;
    int arr[3];
    cin >> x;

    for (int i = 0; i < 3; i++) {
      cin >> arr[i];
    }

    sort(arr, arr + 3);
    sum += arr[0];
    sum += arr[1];

    while (count < x) {
      sum += arr[0];
      // cout << sum <<" ";
      count++;
    }
    cout << sum << endl;
  }
  return 0;
}
