#include <iostream>
using namespace std;
int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  int s[3];
  for ( int i = 0; i < 3; i++ ) 
    cin >> s[i];
  int min = 2e9;
  for ( int i = 0; i < 3; i++ ) 
    if ( min > s[i] ) 
      min = s[i];
  if ( min == s[0] ) 
    cout << "Monnei";
  else if ( min == s[1] ) 
    cout << "Fjee";
  else 
    cout << "Dolladollabilljoll";
}
