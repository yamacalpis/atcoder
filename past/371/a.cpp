#include <bits/stdc++.h>
using namespace std;

int main() {
  string ab, ac, bc;
  cin >> ab >> ac >> bc;

  int countA = 0, countB = 0, countC = 0;
  if (ab == ">") {
     countA++;
  }
  else {
    countB++;
  }
  if (ac == ">") {
    countA++;
  }
  else {
    countC++;
  }
  if (bc == ">") {
    countB++;
  }
  else {
    countC++;
  }

  string ans;
  if (countA == 1) {
    ans = "A";
  }
  else if (countB == 1) {
    ans = "B";
  }
  else {
    ans = "C";
  }
  cout << ans << endl;
  return 0;
}