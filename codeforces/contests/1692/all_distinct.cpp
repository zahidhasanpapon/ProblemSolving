#include <iostream>
using namespace std;

bool is_distinct(int arr[], int len) {
  for (int i = 0; i < len - 1; i++) {
    for (int j = i + 1; j < len; j++) {
      if (arr[i] == 0 || arr[j] == 0) {
        continue;
      }
      if (arr[i] == arr[j]) {
        return false;
      }
    }
  }
  return true;
}

int main() {

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

  int t;
  cin >> t;

  for (int i = 0; i < t; i++) {

    int len;
    cin >> len;
    int arr[len];

    for (int j = 0; j < len; j++) {
      cin >> arr[j];
    }

    bool distinct = is_distinct(arr, len);

    int first = 0, last = len - 1;

    // if (arr[first] == arr[last]) {
    //   first++;
    // }

    while (!distinct) {
      while ((arr[first] == 0 && arr[last] == 0) && (arr[first == arr[last]]))
        ;
      arr[first] = 0;
      arr[last] = 0;
      first++;
      last--;
      distinct = is_distinct(arr, len);
    }

    // cout << first << endl;
    // cout << last << endl;
    // cout << arr[first] << endl;
    // cout << arr[last] << endl;
    // cout << distinct << '\n';

    // for (int k = 0; k < len - 1; k++) {
    //   for (int z = k + 1; z < len; z++) {
    //     if (arr[k] == arr[z]) {
    //       arr[z] = 0;
    //     }
    //   }
    // }

    int count = 0;
    for (int l = 0; l < len; l++) {
      if (arr[l] == 0) {
        continue;
      }
      count++;
    }

    cout << count << '\n';
  }

  return 0;
}