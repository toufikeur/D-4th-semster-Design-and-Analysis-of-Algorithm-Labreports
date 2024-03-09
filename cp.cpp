#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, k;
    cin >> n >> k;
    int ones = 0;
    for (int i = 0; i < n; i++) {
      ones += max(0, ⌈ik⌉ - (i / k));
    }
    cout << ones << endl;
  }
  return 0;
}