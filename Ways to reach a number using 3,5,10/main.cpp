#include <bits/stdc++.h>
using namespace std;

/*
consider n = 15
*output should be 3.
3 3 3 3 3
5 5 5
10 5


*/
int main() {
  int n;
  cin >> n;

  int *arr = new int[n + 1]();
  arr[0] = 1;

  for (int i = 3; i <= n; i++) {
    arr[i] += arr[i - 3];
  }
  for (int i = 5; i <= n; i++) {
    arr[i] += arr[i - 5];
  }
  for (int i = 10; i <= n; i++) {
    arr[i] += arr[i - 10];
  }

  cout << "Total no of combinations are " << arr[n];

  return 0;
}