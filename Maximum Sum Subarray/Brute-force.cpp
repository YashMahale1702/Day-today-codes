#include <bits/stdc++.h>

using namespace std;

// Brute Force
int main() {
  int arr[] = {5, -6, 3, 4, -2, 3, -3};
  int n = (sizeof(arr) / sizeof(int)), max = INT_MIN, sum;

  for (int i = 0; i < n - 1; i++) {
    sum = 0;
    for (int j = i; j < n; j++) {
      sum += arr[j];
      if (sum > max) {
        max = sum;
      }
    }
  }

  cout << max << endl;

  return 0;
}