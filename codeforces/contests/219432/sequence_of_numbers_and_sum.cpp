#include <iostream>
using namespace std;

int main() {
  int n, m;
  while (cin >> n >> m) {
    if ((n <= 0) || (m <= 0)) {
      return 0;
    }
    int start, end;
    if (n < m) {
      start = n;
      end = m;
    } else {
      start = m;
      end = n;
    }
    int sum = 0;
    for (int i = start; i <= end; i++) {
      cout << i << ' ';
      sum += i;
    }
    cout << "sum =" << sum << '\n';
  }
  return 0;
}