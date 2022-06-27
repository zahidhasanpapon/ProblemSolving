#include <iostream>
using namespace std;

int factorial(int num) {
  int result = 1;
  for (int i = 1; i <= num; i++) {
    result *= i;
  }
  return result;
}

int main() {
  int t;
  cin >> t;

  for (int i = 0; i < t; i++) {
    int n;
    cin >> n;
    int factorial_result = factorial(n);
    cout << factorial_result << '\n';
  }

  return 0;
}