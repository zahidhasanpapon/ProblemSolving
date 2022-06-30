#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  int i = 1, j = 2, k = 3;

  for (int m = 0; m < n; m++) {
    cout << i << ' ' << j << ' ' << k << ' ' << "PUM" << '\n';
    i += 4, j += 4, k += 4;
  }

  return 0;
}