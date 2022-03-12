#include <bits/stdc++.h>

using namespace std;

// added in experimental branch

// ***TODO

int main() {
  vector<int> arr{10, 5, 2, 3, -6, 9, 11};
  int n = arr.size(), len = 1;
  vector<int> dp(n, 1);

  for (int i = 1; i < n; i++) {
    for (int j = 0; j < i; j++) {
      // if the cur ele is largest
      if (arr[i] > arr[j]) {
        dp[i] = max(dp[i], 1 + dp[j]);
        len = max(len, dp[i]);
      }
    }
  }

  cout << len << endl;
}