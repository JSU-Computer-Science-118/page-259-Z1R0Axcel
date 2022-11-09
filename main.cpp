#include <cmath>
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;
int main() {
  double a, b, c, discriminant;
  cout << "Enter a (the coefficient of x^2): ";
  cin >> a;
  cout << "Enter b (the coefficient of x): ";
  cin >> b;
  cout << "Enter c (the constant term): ";
  cin >> c;
  discriminant = pow(b, 2.0) - 4 * a * c;
  if (discriminant == 0) {
    cout << "Single (repeated) root." << endl;
    cout << "x = " << -b / (2.0 * a) << endl;
  } else if (discriminant > 0) {
    cout << "Two real roots." << endl;
    cout << "x1 = " << (-b + pow(discriminant, 1.0 / 2.0)) / (2.0 * a) << endl
         << "x2 = " << (-b - pow(discriminant, 1.0 / 2.0)) / (2.0 * a) << endl;
  } else
    cout << "Two complex roots." << endl;
  return 0;
}
