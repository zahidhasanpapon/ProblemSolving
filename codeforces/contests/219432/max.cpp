#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int max = -1;

  for (int i = 0; i < n; i++) {
    int curr;
    cin >> curr;

    if (curr > max) {
      max = curr;
    }
  }

  cout << max << '\n';

  return 0;
}