#include <iostream>
#include <math.h>

using namespace std;

int main()
{
  long double A, B, C, D;
  cin >> A >> B >> C >> D;

  cout << (((B * log(A)) > (D * log(C))) ? "YES" : "NO");

  return 0;
}