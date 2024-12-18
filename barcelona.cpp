#include <iostream>
#include <vector>
using namespace std;
int main() {
  int n, k;
  cin >> n >> k;
  vector<int> v(n);
  int h = 1;
  bool temp = true;
  for ( auto& i : v ) {
    int j; 
    cin >> j;
    i = j;
    if ( i == k )
      temp = false;
    if ( temp ) 
      h++;
  }
  if ( v[0] == k ) 
    cout << "fyrst";
  else if ( v[1] == k ) 
    cout << "naestfyrst";
  else {
    cout << h << " fyrst";
  }
}
