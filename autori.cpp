#include <iostream>
using namespace std;
int main() {
  string s = "";
  char c;
  while(cin >> c) {
    if ( c >= 'A' && c <= 'Z' ) 
      s += c;
  }
  cout << s;
}
