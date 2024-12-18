#include <iostream>
using namespace std;
int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  int x1, y1, x2, y2;
  cin >> x1 >> y1 >> x2 >> y2;
  if ( x1 == x2 || y1 == y2 ) 
    cout << 1;
  else 
    cout << 2;
}
