#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  string ans;
  for (int i = 0; i < s.size(); i++) {
    if (s.at(i) != '.') {
      ans.push_back(s.at(i));
    }
  }

  cout << ans << endl;
  return 0;
}