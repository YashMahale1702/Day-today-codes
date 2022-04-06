#include <bits/stdc++.h>
using namespace std;

int main() {
  // your code goes here
  int t;
  cin >> t;

  while (t--) {
    int n, k, count = 0, i;
    cin >> n >> k;
    int arr[n];

    for (i = 0; i < n; i++) {
      cin >> arr[i];
    }

    i = n - 1;
    while (arr[i] >= k && i >= 0) {
      i--;
    }

    for (; i >= 0; i--)
      count++;

    cout << count << endl;
  }

  return 0;
}
