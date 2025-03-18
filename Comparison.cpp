#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int A, B;
  char S;
  cin >> A >> S >> B;

  switch (S)
  {
  case '=':
    if (A == B)
      cout << "Right" << endl;
    else
      cout << "Wrong" << endl;
    break;
  case '>':
    if (A > B)
      cout << "Right" << endl;
    else
      cout << "Wrong" << endl;
    break;
  case '<':
    if (A < B)
      cout << "Right" << endl;
    else
      cout << "Wrong" << endl;
    break;
  }

  return 0;
}