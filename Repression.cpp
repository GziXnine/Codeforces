#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
  int numOne = 0, numTwo = 0, numThree = 0;
  cin >> numOne >> numTwo >> numThree;

  cout << max(numOne + numTwo, max(numOne + numThree, numTwo + numThree)) << endl;

  return 0;
}