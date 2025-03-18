#include <iostream>

using namespace std;

int main()
{
  int tries = 0, numOne = 0, numTwo = 0, numThree = 0, count = 0;
  cin >> tries;

  while (tries--)
  {
    cin >> numOne >> numTwo >> numThree;

    if (numOne + numTwo + numThree >= 2)
      count++;
  }

  cout << count << endl;

  return 0;
}