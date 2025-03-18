#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  double n, k, a;
  cin >> n >> k >> a;

  long double Q = (n * k) / a;
  if (fmod(Q, 1) == 0)
  {
    if (Q <= 2147483647)
      cout << "int\n";
    else
      cout << "long long\n";
  }
  else
    cout << "double\n";

  return 0;
}