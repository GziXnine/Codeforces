
#include <iostream>

using namespace std;

int main()
{
  long long a, b, c;
  long double d;
  cin >> a >> b >> c >> d;

  cout << ((((a + b - c) == d) || ((a + b * c) == d) ||
            ((a * b + c) == d) || ((a * b - c) == d) ||
            ((a - b + c) == d) || ((a - b * c) == d))
               ? "YES\n"
               : "NO\n");

  return 0;
}