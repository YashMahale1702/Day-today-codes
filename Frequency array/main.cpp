#include <bits/stdc++.h>

using namespace std;

int main() {
  int arr[] = {10, 7, 2, 1, 6, 7, 3, 2, 1};
  int n = (sizeof(arr) / sizeof(int));

  int max = *max_element(arr, arr + n);
  cout << max << " ";

  //   Frequency array creation and assigning values
  int *freq = new int[max + 1]();
  for (int i = 0; i < n; i++) {
    freq[arr[i]]++;
  }

  //   Display
  cout << "Frequncy array\n";
  for (int i = 0; i <= max; i++) {
    cout << freq[i] << " ";
  }

  return 0;
}