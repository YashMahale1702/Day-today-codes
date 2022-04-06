#include <bits/stdc++.h>
using namespace std;

int maxHist(int row[], int C) {
  stack<int> result;

  int top_val; // Top of stack

  int max_area = 0; // Initialize max area in current

  int area = 0; // Initialize area with current top

  int i = 0;
  while (i < C) {
    if (result.empty() || row[result.top()] <= row[i])
      result.push(i++);

    else {
      top_val = row[result.top()];
      result.pop();
      area = top_val * i;

      if (!result.empty())
        area = top_val * (i - result.top() - 1);
      max_area = max(area, max_area);
    }
  }

  while (!result.empty()) {
    top_val = row[result.top()];
    result.pop();
    area = top_val * i;
    if (!result.empty())
      area = top_val * (i - result.top() - 1);

    max_area = max(area, max_area);
  }
  return max_area;
}

int main() {
  // your code goes here
  int n, m, temp;
  cin >> n >> m;
  int **arr = new int *[n];

  for (int i = 0; i < n; i++) {
    arr[i] = new int[m];

    for (int j = 0; j < m; j++) {
      cin >> arr[i][j];
    }
  }

  int result = maxHist(arr[0], m);

  for (int i = 1; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (arr[i][j]) {
        arr[i][j] += arr[i - 1][j];
      }
    }

    result = max(result, maxHist(arr[i], m));
  }

  cout << result << endl;

  return 0;
}
