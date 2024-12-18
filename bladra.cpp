#include <iostream>
#include <cmath>
using namespace std;
double func(double v, double a, double t) {
  return (v*t + (double)1/2*a*pow(t,2));
}
int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  double v, a, t;
  cin >> v >> a >> t;
  cout << func(v, a, t);
}
