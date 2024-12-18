#include <iostream>
using namespace std;
string func(int n) {
  if ( n % 10 == 0 ) 
    return "Jebb";
    
  return "Neibb";
}
int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  int n; 
  cin >> n;
  cout << func(n);
}
