//Luke McClinton J00916724 11/08/22
#include <cmath>
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;
int main() {
  double a, b, c, discriminant;
   cin >> a;
  cin >> b;
  cin >> c;
  discriminant = pow(b, 2.0) - 4 * a * c;
  if (discriminant == 0) {
    cout << "The signle root is" << -b / (2.0 * a) << endl;
  } else if (discriminant > 0) {
    cout << "Two real roots." << endl;
    cout << "-First root " << (-b + pow(discriminant, 1.0 / 2.0)) / (2.0 * a)
         << endl
         << "-Second root " << (-b - pow(discriminant, 1.0 / 2.0)) / (2.0 * a)
         << endl;
  } else
    cout << "Two complex roots." << endl;
  return 0;
}
