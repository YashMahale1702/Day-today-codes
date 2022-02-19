#include <bits/stdc++.h>

using namespace std;

int main() {
  int sum;

  cout << "Enter the total sum to be formed " << endl;
  cin >> sum;
  int *dp = new int[sum + 1]();

  // outer loop is for dp table
  dp[0] = 1;
  for (int i = 1; i <= sum; i++) {
    // inner loop is for dice
    for (int j = 1; j <= 6 && i - j >= 0; j++) {
      dp[i] = dp[i] + dp[i - j];
    }
  }

  cout << "Max Combinations are " << dp[sum] << endl;
  return 0;
}