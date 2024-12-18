#include <iostream>
using namespace std;
int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  int n;
  cin >> n;
  if ( n % 2 == 0 ) 
    cout << "Bob";
  else 
    cout << "Alice";
}
