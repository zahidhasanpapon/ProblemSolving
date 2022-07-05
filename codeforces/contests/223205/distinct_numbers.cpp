#include <iostream>
using namespace std;

#define max 2002

int main() {
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
    arr[i] += 1000;
  }
  bool visited[max] = {false};
  for (int i = 0; i < n; i++) {
    int curr = arr[i];
    visited[curr] = true;
  }
  int cnt = 0;
  for (int i = 0; i < max; i++) {
    if (visited[i]) {
      cnt++;
    }
  }
  cout << cnt << '\n';

  return 0;
}
