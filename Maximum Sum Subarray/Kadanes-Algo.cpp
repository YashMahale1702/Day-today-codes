#include <bits/stdc++.h>

using namespace std;

int main() {
  int arr[] = {5, -6, 3, 4, -2, 3, -3};
  int n = (sizeof(arr) / sizeof(int));
  int partial_sum_subarray = 0, max = INT_MIN;

  for (int i = 0; i < n; i++) {
    partial_sum_subarray += arr[i];

    // if the cur subarray's sum is greater than the prev sum
    if (partial_sum_subarray > max) {
      max = partial_sum_subarray;
    }

    //   reset the counter if subarray's sum is negative
    if (partial_sum_subarray < 0) {
      partial_sum_subarray = 0;
    }
  }

  cout << "Max sum sub-array is " << max << endl;
  return 0;
}