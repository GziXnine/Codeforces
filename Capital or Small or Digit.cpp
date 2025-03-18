#include <iostream>

using namespace std;

int main()
{
  char A;
  cin >> A;

  if (A >= 48 && A < 65)
    cout << "IS DIGIT" << endl;
  else if (A >= 65 && A < 97)
  {
    cout << "ALPHA" << endl;
    cout << "IS CAPITAL" << endl;
  }
  else
  {
    cout << "ALPHA" << endl;
    cout << "IS SMALL" << endl;
  }

  return 0;
}