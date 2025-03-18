#include <iostream>

using namespace std;

int main()
{
  unsigned long long numOne = 0, numTwo = 0;
  cin >> numOne >> numTwo;

  cout << ((numOne % 10) + (numTwo % 10)) << endl;

  return 0;
}