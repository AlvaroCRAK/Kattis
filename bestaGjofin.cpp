#include <iostream>
#include <vector>
using namespace std;
struct Person {
  string name;
  int num;
  Person(string na, int n) : name(na), num(n) {}
};
int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  int n; 
  cin >> n;
  vector<Person*> p(n);
  int num;
  string name;
  while ( n-- ) {
    cin >> name >> num;
    p[n] = new Person(name, num);
  }
  Person* p_max = nullptr;
  for ( int i = 0; i < p.size(); i++ ) {
    if ( p_max == nullptr ) 
      p_max = p[i];
    if ( p_max->num < p[i]->num ) 
      p_max = p[i];
  }
  cout << p_max->name;
}
