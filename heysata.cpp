#include <iostream>
using namespace std;
int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  int n;
  char c;
  string s;
  cin >> n >> c >> s;
  bool temp = false;
  for ( int i = 0; i < s.length(); i++ ) 
    if ( s[i] == c ) {
      temp = true;
      break;
    }
  if ( temp ) 
    cout << "Unnar fann hana!";
  else 
    cout << "Unnar fann hana ekki!";
}
