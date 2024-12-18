#include <iostream>
using namespace std;
int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  string s;
  cin >> s;
  int b, k;
  b = k = 0;
  for ( int i = 0; i < s.length(); i++ ) {
    if ( s[i] == 'b' ) 
      b++;
    if ( s[i] == 'k' ) 
      k++;
  }
  if ( b > k ) 
    cout << "boba";
  else if ( k > b ) 
    cout << "kiki";
  else if ( b == 0 && k == 0 ) 
    cout << "none";
  else 
    cout << "boki";
}
