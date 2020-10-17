// cpp implementation of left rotation of an array K number of times
#include <bits/stdc++.h>
using namespace std;

void leftRotate(int*, int, int);

int main() {
  int arr[] = { 1, 3, 5, 7, 9 };
  int n = sizeof(arr) / sizeof(arr[0]);
  int k = 2;
  leftRotate(arr, n, k);
  return 0;
}

void leftRotate(int arr[], int n, int k) {
  int mod = k % n;
  for (int i = 0; i < n; i++) {
    cout << arr[(mod + i) % n] << ' ';
  }
  cout << '\n';
}
