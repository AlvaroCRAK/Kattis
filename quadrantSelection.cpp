#include <iostream>
using namespace std;
int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  int x, y;
  cin >> x >> y;
  if ( x > 0 ) {
    if ( y > 0 ) 
      cout << 1;
    else 
      cout << 4;
  }
  else {
    if ( y > 0 ) 
      cout << 2;
    else 
      cout << 3;
  }
}
