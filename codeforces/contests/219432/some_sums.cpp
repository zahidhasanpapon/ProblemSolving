#include <iostream>
using namespace std;

bool digits_sum(int a, int b, int num) {
  int sum = 0;
  while (num > 0) {
    int curr = num % 10;
    sum += curr;
    num /= 10;
  }
  if ((sum >= a) && (sum <= b)) {
    return true;
  }
  return false;
}

int main() {
  int n, a, b, sum = 0;
  cin >> n >> a >> b;
  for (int i = 1; i <= n; i++) {
    if (digits_sum(a, b, i)) {
      sum += i;
    }
  }
  cout << sum << '\n';

  return 0;
}