#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  double PI = 3.14159, Radius = 0.0;

  cin >> Radius;

  cout << fixed << setprecision(4);
  cout << "A=" << PI * Radius * Radius << endl;

  return 0;
}