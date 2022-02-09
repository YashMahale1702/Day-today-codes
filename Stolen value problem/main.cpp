#include <bits/stdc++.h>

using namespace std;

int max(int a, int b) { return a > b ? a : b; }

int main() {
  int value[] = {0, 5, 3, 4, 11, 2};
  int n = (sizeof(value) / sizeof(int));
  int *dp = new int[n];

  dp[0] = value[0];
  dp[1] = value[1];
  for (int i = 2; i < n; i++) {
    dp[i] = max(dp[i - 1], dp[i - 2] + value[i]);
  }

  cout << "Value is " << dp[n - 1];

  return 0;
}