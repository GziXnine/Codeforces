#include <iostream>

using namespace std;

int main()
{
  string a;
  cin >> a;

  int x = (int)a[0] - 48;
  int y = (int)a[1] - 48;

  if (y == 0)
    cout << "YES\n";
  else
  {
    if ((x % y == 0) || (y % x == 0))
      cout << "YES\n";
    else
      cout << "NO\n";
  }

  return 0;
}