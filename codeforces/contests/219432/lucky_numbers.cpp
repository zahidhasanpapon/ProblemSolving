#include <iostream>
using namespace std;

bool is_lucky(int num) {
  while (num > 0) {
    int curr_digit = num % 10;
    if (!(curr_digit == 4 || curr_digit == 7)) {
      return false;
    }
    num /= 10;
  }
  return true;
}

int main() {
  int a, b;
  cin >> a >> b;
  bool lucky = false;

  for (int i = a; i <= b; i++) {
    if (is_lucky(i)) {
      cout << i << ' ';
      lucky = true;
    }
  }

  if (!lucky) {
    cout << -1 << '\n';
  }

  return 0;
}