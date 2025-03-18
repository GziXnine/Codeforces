#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  long A, B, C, D;
  cin >> A >> B >> C >> D;

  A = A % 100;
  B = B % 100;
  C = C % 100;
  D = D % 100;
  long equals = (A * B * C * D) % 100;

  if (equals < 10)
    cout << 0 << equals;
  else
    cout << equals;

  return 0;
}