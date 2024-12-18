#include <iostream>
using namespace std;
int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  string s = "";
  char c;
  while(cin >> c) {
    if ( c == ' ' )
      continue;
    s += c;
  }
  cout << s;
}
