#include <iostream>

using namespace std;

int main() {
  // your code goes here
  int t;
  cin >> t;

  while (t--) {
    int n, temp, count = 0, steps_so_far = 0;
    cin >> n;
    int arr[n + 1] = {0};

    for (int i = 1; i <= n; i++) {
      cin >> temp;
      if (temp == i + steps_so_far) {
        count++;
        steps_so_far++;
      }
    }

    cout << count << endl;
  }
  return 0;
}
