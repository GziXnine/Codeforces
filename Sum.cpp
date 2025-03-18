#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
  int tries = 0, numOne = 0, numTwo = 0, numThree = 0;
  cin >> tries;

  while (tries--)
  {
    cin >> numOne >> numTwo >> numThree;

    int maxNum = max(numOne, max(numTwo, numThree));
    int sum = numOne + numTwo + numThree;

    cout << (sum == maxNum * 2 ? "YES" : "NO") << endl;
  }

  return 0;
}