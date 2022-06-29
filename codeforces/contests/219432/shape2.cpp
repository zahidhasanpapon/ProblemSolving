#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++) {
    for (int k = 1; k <= n - i; k++) {
      cout << ' ';
    }
    int limit = i + (i - 1);
    for (int m = 1; m <= limit; m++) {
      cout << '*';
    }
    cout << '\n';
  }
  return 0;
}