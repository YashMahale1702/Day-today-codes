#include <bits/stdc++.h>

using namespace std;

int main() {
  int arr[] = {1, 3, 2, 4, 5, 7};
  int n = sizeof(arr) / sizeof(int);
  int curMax = arr[0], count = 1, player;

  for (int i = 1; i < n; i++) {
    // check if cur is larger than cur+1;
    if (arr[i] > curMax) {
      curMax = arr[i];
      count++;
    }
  }

  count % 2 == 0 ? player = 2 : player = 1;

  cout << "Player " << player << " wins the game";

  return 0;
}