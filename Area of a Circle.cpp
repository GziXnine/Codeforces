#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  double R;
  cin >> R;

  double Area = R * R * 3.141592653;
  cout << setprecision(11) << Area;

  return 0;
}