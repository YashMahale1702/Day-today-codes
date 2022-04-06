#include <iostream>
#include <string>
using namespace std;

int main() {
  int n, length, count;
  // your code goes here
  string binary;
  cin >> n;
  while (n--) {
    count = 1;
    cin >> length >> binary;
    for (int i = 0; i < length - 1; i++) {
      if (binary[i] != binary[i + 1]) {
        count = count + 1;
      }
    }
    cout << count << endl;
  }
  return 0;
}