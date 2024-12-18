#include <iostream>
using namespace std;
int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  string word;
  cin >> word;
  for ( int i = word.length()-1; i >= 0; i-- ) 
    cout << word[i];
}
