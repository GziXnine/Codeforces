#include <iostream>

using namespace std;

int main()
{
  int a, b;
  cin >> a >> b;

  if (a == 0 && b == 0)
    cout << "NO\n";
  else
    cout << ((((a - b) == 1) || ((a - b) == 0) || ((b - a) == 1) || ((b - a) == 0)) ? "YES\n" : "NO\n");

  return 0;
}