#include <iostream>
using namespace std;
string func(string s) {
  string c = "COV";
  for ( int i = 0; i <= (s.length()-c.length()); i++ ) 
    if ( c[0] == s[i] ) {
      bool temp = true;
      for ( int j = 0; j < c.length(); j++ ) 
        if ( s[i+j] != c[j] ) {
          temp = false;
          break;
        }
      if ( temp ) 
        return "Veikur!";
    }
  return "Ekki veikur!";
}
int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  string s;
  cin >> s;
  cout << func(s);
}
