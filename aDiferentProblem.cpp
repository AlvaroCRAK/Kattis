#include <iostream>
using namespace std;
int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  long a, b;
  while(cin >> a >> b) {
    cout << abs(a-b) << endl;
  }
}
