#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int A, B;
  char Q, S;
  long long C;
  cin >> A >> S >> B >> Q >> C;

  switch (S)
  {
  case '+':
    if ((A + B) == C)
      cout << "Yes" << endl;
    else
      cout << A + B << endl;
    break;
  case '-':
    if ((A - B) == C)
      cout << "Yes" << endl;
    else
      cout << A - B << endl;
    break;
  case '*':
    if ((A * B) == C)
      cout << "Yes" << endl;
    else
      cout << A * B << endl;
    break;
  }

  return 0;
}