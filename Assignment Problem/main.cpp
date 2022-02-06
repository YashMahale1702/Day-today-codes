#include <bits/stdc++.h>

using namespace std;

int min_2(int a, int b) { return a < b ? a : b; }

int count_set_bits(int x) {
  int count = 0;
  while (x > 0) {
    count += (x & 1);
    x = x >> 1;
  }
  return count;
}

int main() {
  int n, total_n, x;
  cin >> n;
  total_n = pow(2, n);
  int **cost = new int *[n];
  int *dp = new int[total_n];

  cout << "Enter the cost matrix:\n";
  for (int i = 0; i < n; i++) {
    cost[i] = new int[n];
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> cost[i][j];
    }
  }

  //   init the dp table with max_int
  for (int i = 0; i < pow(2, n); i++) {
    dp[i] = INT_MAX;
  }

  // outer loop is for the mask , inner loop is for the no of bits in the j
  for (int mask = 0; mask < pow(2, n); mask++) {
    x = count_set_bits(mask);
    for (int j = 0; j < n; j++) {
      if (!(mask & (1 << j))) {
        dp[mask | (1 << j)] =
            min_2(dp[mask | (1 << j)], (cost[x][j] + dp[mask]));
        cout << j << "\n";
      }
    }
  }
  // print the output cout << dp[total_n - 1];
  for (int i = 0; i < pow(2, n); i++) {
    cout << dp[i] << "\n";
  }
}
