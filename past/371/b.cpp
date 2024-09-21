#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> a(m);
  vector<string> b(m);
  for (int i = 0; i < m; i++) {
    cin >> a.at(i) >> b.at(i);
  }

  vector<string> ans(m, "No");
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (a.at(j) == i + 1 && b.at(j) == "M") {
        ans.at(j) = "Yes";
        break;
      }
    }
  }

  for (int i = 0; i < m; i++) {
    cout << ans.at(i) << endl;
  }
  return 0;
}