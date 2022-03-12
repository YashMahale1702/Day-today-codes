#include <bits/stdc++.h>

using namespace std;

vector<int> findPairs(vector<int> arr, int sum) {
  set<int> s;
  for (int i = 0; i < arr.size(); i++) {
    int x = sum - arr[i];

    // if found
    if (s.find(x) != s.end()) {
      return {x, arr[i]};
    }
    //
    s.insert(arr[i]);
  }
  return {};
}

int main() {

  vector<int> arr{10, 5, 2, 3, -6, 9, 11};
  int sum = 4;

  auto p = findPairs(arr, sum);
  if (p.size() == 0)
    cout << "Pairs dont exist" << endl;
  else
    cout << p[0] << ", " << p[1] << endl;

  return 0;
}