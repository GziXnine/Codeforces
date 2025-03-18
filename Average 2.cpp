#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  double numOne = 0, numTwo = 0, numThree = 0;

  cin >> numOne >> numTwo >> numThree;

  double sum = numOne * 2 + numTwo * 3 + numThree * 5;

  cout << fixed << setprecision(1);
  cout << "MEDIA = " << sum / 10 << endl;

  return 0;
}