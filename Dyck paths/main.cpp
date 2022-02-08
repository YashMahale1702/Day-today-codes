#include <bits/stdc++.h>

using namespace std;

int fact(int n) {
  int x = 1;
  for (int i = 1; i <= n; x *= i, i++)
    ;
  return x;
}

int main() {
  long long int n, catalan_no, temp;
  cout << "Enter the value of n" << endl;
  cin >> n;

  temp = fact(n);
  cout << temp << endl;
  catalan_no = fact(2 * n) / (temp * temp);
  catalan_no /= (n + 1);

  cout << "Catalan Number " << catalan_no;
}