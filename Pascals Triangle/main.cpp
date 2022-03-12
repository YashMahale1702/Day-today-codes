#include <bits/stdc++.h>

using namespace std;

int main() {}

class Solution {
public:
  vector<vector<int>> generate(int numRows) {
    vector<vector<int>> vect(numRows);

    // no of rows
    for (int i = 0; i < numRows; i++) {
      for (int j = 0; j <= i; j++) {

        // for first and last ele always 1
        if (j == 0 || j == i)
          vect[i].push_back(1);
        else {
          vect[i].push_back(vect[i - 1][j - 1] + vect[i - 1][j]);
        }
      }
    }

    return vect;
  }
};