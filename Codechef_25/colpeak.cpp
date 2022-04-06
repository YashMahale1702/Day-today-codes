#include <bits/stdc++.h>
using namespace std;

int main() {
  // your code goes here
  int t;
  cin >> t;

  while (t--) {
    int n, k;
    cin >> n >> k;
    int arr[n];
    vector<int> days;

    for (int i = 0; i < n; i++) {
      cin >> arr[i];
    }

    for (int i = 1; i < n; i++) {
      if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
        days.push_back(i + 1);
      }
    }

    if (k > days.size())
      cout << "-1" << endl;
    else
      cout << days[k - 1] << endl;
  }

  return 0;
}
