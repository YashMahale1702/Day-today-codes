#include <bits/stdc++.h>

using namespace std;

#define mx 200000

int arr1[mx + 1];
int prio[mx + 1];
int arr2[mx + 1];

void build_prio(int n) {
  for (int i = 0; i < n; i++) {
    if (i == 0) {
      prio[i] = 1;
    } else {
      if (arr1[i] == arr1[i - 1]) {
        prio[i] = prio[i - 1];
      } else {
        prio[i] = prio[i - 1] + 1;
      }
    }
  }
}

int main() {

  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> arr1[i];
  }
  build_prio(n);

  int m;
  // n is highest
  int point = n;
  cin >> m;

  for (int j = 0; j < m; j++) {
    cin >> arr2[j];
  }

  for (int j = 0; j < m; j++) {

    int current_prio;

    while (point >= 0 and arr2[j] > arr1[point]) {
      point--;
    }

    if (point == -1) {
      current_prio = 1;
    } else if (arr2[j] == arr1[point]) {
      current_prio = prio[point];
    } else if (arr2[j] < arr1[point]) {
      current_prio = prio[point] + 1;
    }

    cout << current_prio << endl;
  }

  return 0;
}
