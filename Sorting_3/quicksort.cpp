#include <bits/stdc++.h>

using namespace std;

void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

int partition(int arr[], int l, int h) {
  int pivot = arr[l];

  int i = l, j = h;
  while (i < j) {

    // find the elememts to swap
    while (arr[i] <= pivot) {
      // largest
      i++;
    };

    while (arr[j] > pivot) {
      // smallest
      j--;
    }

    if (i < j) {
      //  if i  and i did not cross, just swap
      swap(&arr[i], &arr[j]);
    } else {
      //   if crossed
      swap(&arr[l], &arr[j]);
      break;
    }
  }

  return j;
}

void Quicksort(int arr[], int l, int h) {
  int j;

  if (l < h) {
    j = partition(arr, l, h);
    Quicksort(arr, l, j);
    Quicksort(arr, j + 1, h);
  }
}

int main() {
  int n;

  //   cin >> n;
  int arr[] = {11, 13, 7, 12, 16, 9, 24, 5, 10, 3, INT_MAX};
  n = (sizeof(arr) / sizeof(int));

  //   Quicksort
  Quicksort(arr, 0, n - 1);

  for (int ele : arr) {
    cout << ele << " ";
  }

  return 0;
}