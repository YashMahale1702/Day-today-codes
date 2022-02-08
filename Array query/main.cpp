#include <bits/stdc++.h>

using namespace std;

int query(int partial_sum_arr[], int l, int r) {
  return partial_sum_arr[r] - partial_sum_arr[l - 1];
}

int main() {
  int arr[] = {7, -2, 3, 9, -11, 5, 1, -3};
  int n = (sizeof(arr) / sizeof(int));
  int *partial_sum = (int *)malloc(sizeof(int) * n);

  //   partial array
  partial_sum[0] = arr[0];
  for (int i = 1; i < n; i++) {
    partial_sum[i] = partial_sum[i - 1] + arr[i];
  }

  //   query in constant time
  cout << query(partial_sum, 3, 6) << " First \n";
  cout << query(partial_sum, 1, 5) << " Second \n";
  cout << query(partial_sum, 2, 4) << " Third \n";

  return 0;
}