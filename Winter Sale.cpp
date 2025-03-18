#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  long P;
  float X;
  cin >> X >> P;

  cout << setprecision(8) << (float)(P / (1 - (X / 100)));

  return 0;
}