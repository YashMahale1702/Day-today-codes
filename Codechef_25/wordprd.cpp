#include <bits/stdc++.h>
using namespace std;

int main() {
  // your code goes here
  int t;
  cin >> t;

  while (t--) {
    int n, max = 0;
    cin >> n;

    vector<vector<char>> v;

    for (int i = 0; i < n; i++) {

      string temp_string;
      cin >> temp_string;
      vector<char> s;

      for (int j = 0; j < temp_string.size(); j++) {
        s.push_back(temp_string[j]);
      }

      v.push_back(s);
    }

    for (int i = 0; i < n - 1; i++) {
      for (int j = i + 1; j < n - 1; j++) {

        vector<char> intersect;

        set_intersection(v[i].begin(), v[i].end(), v[j].begin(), v[j].end(),
                         back_inserter(intersect));

        if (intersect.size() == 0) {
          int mul = v[i].size() * v[j].size();
          if (mul > max) {
            max = mul;
            // cout << mul <<" " <<i << " "<< j <<endl;
          }
        }
      }
    }

    cout << max << endl;
  }

  return 0;
}
