#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;
  for (int tc = 0; tc < t; tc++) {
    int num;
    cin >> num;
    if (num == 0) {
      cout << num << ' ';
    }
    while (num > 0) {
      cout << num % 10 << ' ';
      num /= 10;
    }
    cout << '\n';
  }
  return 0;
}