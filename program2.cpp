// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
  cout << "SHRI KARESHIDDESWAR PRASANNA"
       << "\n";
  int arr[6] = {1, 0, 2, 1, 0, 1};
  int l = 0, m = 0, h = 5;
  while (m <= h) {
    if (arr[m] == 0) {
      swap(arr[l], arr[m]);
      l = l + 1;
      m = m + 1;
    } else if (arr[m] == 1) {
      m = m + 1;
    } else {
      swap(arr[m], arr[h]);
      h = h - 1;
    }
  }
  for (int i = 0; i < 6; i++)
    cout << arr[i] << " ";
}
