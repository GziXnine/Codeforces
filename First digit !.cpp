#include <iostream>

using namespace std;

int main()
{
  long A;
  cin >> A;

  if ((A / 1000) % 2 == 0)
    cout << "EVEN" << endl;
  else
    cout << "ODD" << endl;

  return 0;
}