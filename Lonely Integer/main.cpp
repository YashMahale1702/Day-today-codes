#include <bits/stdc++.h>

using namespace std;

int main() {
  int arr[] = {
      1, 2, 3, 10, 2, 1, 10, 8, 6, 6, 3,
  };
  int n = sizeof(arr) / sizeof(int), temp = 0;

  for (int i = 0; i < n; i++) {
    temp = temp ^ arr[i];
  }

  cout << temp << endl;

  return 0;
}