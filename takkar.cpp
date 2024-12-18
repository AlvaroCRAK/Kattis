#include <iostream>
using namespace std;
string func(int a, int b) {
  if ( a < b ) 
    return "FAKE NEWS!";
  else if ( a > b ) 
    return "MAGA!";
  return "WORLD WAR 3!";
}
int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  int a, b;
  cin >> a >> b;
  cout << func(a, b);
}
