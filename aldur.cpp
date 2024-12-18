#include <iostream>
using namespace std;
int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  int n;
  cin >> n;
  int m;
  int min = 2e5;
  while ( n-- ) {
    cin >> m;
    if ( m < min ) 
      min = m;
  }
  cout << min;
}
