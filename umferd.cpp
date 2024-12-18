#include <iostream>
#include <vector>
using namespace std;
int main() {
  int m, n;
  cin >> n >> m;
  vector<vector<char>> vv(m);
  char k;
  for ( int i = 0; i < m; i++ ) 
    for ( int j = 0; j < n; j++ ) {
      cin >> k;
      vv[i].push_back(k);
    }
  int punto = 0;
  int numeral = 0;
  for ( int i = 0; i < vv.size(); i++ ) 
    for ( int j = 0; j < vv[i].size(); j++ ) 
      if ( vv[i][j] == '.' )
        punto++;
      else 
        numeral++;
  cout << (double)punto/(numeral+punto);

}
