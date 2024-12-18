#include <iostream>
using namespace std;
int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  int n;
  int m;
  int sum = 0;
  cin >> n;
  for ( int i = 0; i < n; i++ ) {
    cin >> m;
    sum += m;
  }
  cout << sum;
}
