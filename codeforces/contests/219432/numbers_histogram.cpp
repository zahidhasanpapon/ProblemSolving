#include <iostream>
using namespace std;

int main() {
  char s;
  cin >> s;
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int curr;
    cin >> curr;
    for (int k = 0; k < curr; k++) {
      cout << s;
    }
    cout << '\n';
  }
  return 0;
}