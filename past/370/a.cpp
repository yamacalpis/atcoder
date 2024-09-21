#include <bits/stdc++.h>
using namespace std;

int main() {
  int l, r;
  cin >> l >> r;

  string ans;
  if (l == 1 && r == 0) {
    ans = "Yes";
  }
  else if (l == 0 && r == 1) {
    ans = "No";
  }
  else {
    ans = "Invalid";
  }

  cout << ans << endl;
  return 0;
}