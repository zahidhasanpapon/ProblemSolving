#include <cmath>
#include <iostream>
using namespace std;

int main() {
  int x;
  cin >> x;

  for (int i = 2; i < sqrt(x); i++) {
    if (x % i == 0) {
      cout << "NO" << '\n';
      return 0;
    }
  }

  cout << "YES" << '\n';

  return 0;
}