#include <iostream>
using namespace std;
int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  string word;
  int r;
  cin >> word >> r;
  for ( int i = 0; i < r; i++ ) 
    cout << word;
}
