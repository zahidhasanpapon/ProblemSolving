#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int even = 0, odd = 0, positive = 0, neg = 0;

  for (int i = 0; i < n; i++) {
    int curr;
    cin >> curr;

    if (curr == 0) {
      even++;
    } else if ((curr > 0) && (curr % 2 == 0)) {
      positive++, even++;
    } else if ((curr > 0) && (curr % 2 != 0)) {
      positive++, odd++;
    } else if ((curr < 0) && (curr % 2 == 0)) {
      neg++, even++;
    } else if ((curr < 0) && (curr % 2 != 0)) {
      neg++, odd++;
    }
  }

  cout << "Even: " << even << '\n';
  cout << "Odd: " << odd << '\n';
  cout << "Positive: " << positive << '\n';
  cout << "Negative: " << neg << '\n';

  return 0;
}