#include <iostream>
#include <string>
using namespace std;

int main() {
  int n;
  cin >> n;

  string rev = to_string(n);

  cout << rev << endl;

  int num = stoi(rev);

  if (n == num) {
    cout << "Yes" << '\n';
  }

  return 0;
}