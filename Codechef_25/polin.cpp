#include <bits/stdc++.h>
using namespace std;

int main() {
  long int t;
  cin >> t;

  while (t--) {
    vector<int> v1, v2;
    set<int> s1, s2;
    int n, temp1, temp2, count = 0, i;
    cin >> n;

    while (n--) {
      cin >> temp1 >> temp2;

      s1.insert(temp1);
      s2.insert(temp2);

      // if(find(v1.begin(), v1.end(), temp1) == v1.end()){
      //     v1.push_back(temp1);
      //     count++;
      // }
      // if(find(v2.begin(), v2.end(), temp2) == v2.end()){
      //     v2.push_back(temp2);
      //     count++;
      // }
    }

    cout << s1.size() + s2.size() << endl;
  }

  return 0;
}
