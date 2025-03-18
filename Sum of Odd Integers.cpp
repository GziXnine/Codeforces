#include <iostream>

using namespace std;

int main()
{
  int tries = 0;
  long long numOne = 0, numTwo = 0;

  cin >> tries;

  while (tries--)
  {
    cin >> numOne >> numTwo;

    if ((numOne % 2 == numTwo % 2) && (numOne >= numTwo * numTwo))
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }

  return 0;
}