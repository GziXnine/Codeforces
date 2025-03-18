#include <iostream>

using namespace std;

int main()
{
  unsigned int numOne = 0, numTwo = 0, numThree = 0, numFour = 0;
  cin >> numOne >> numTwo >> numThree >> numFour;

  if (max(numOne, numThree) > min(numTwo, numFour))
    cout << -1;
  else
    cout << max(numOne, numThree) << " " << min(numTwo, numFour);

  return 0;
}