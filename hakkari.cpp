#include <iostream>
#include <vector>
using namespace std;
int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  int n, m;
  cin >> n >> m;
  vector<vector<char>> vv(n, vector<char>(m,' '));
  int num = 0;
  for ( int i = 0; i < vv.size(); i++ ) 
    for ( int j = 0; j < vv[i].size(); j++ ) {
      char c;
      cin >> c;
      vv[i][j] = c;
      if ( c == '*' )
        num++;
    }
  cout << num << endl;
  for ( int i = 0; i < vv.size(); i++ ) 
    for ( int j = 0; j < vv[i].size(); j++ ) {
      if ( vv[i][j] == '*' )
        cout << (i+1) << " " << (j+1) << endl;
    }
}
