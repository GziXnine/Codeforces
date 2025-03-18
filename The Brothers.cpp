#include <iostream>

using namespace std;

int main()
{
  string A, B;
  string C, D;
  cin >> A >> B;
  cin >> C >> D;

  if (B == D)
    cout << "ARE Brothers";
  else
    cout << "NOT";

  return 0;
}