#include <iostream>

using namespace std;

int main()
{
  char A;
  cin >> A;

  if (A >= 65 && A < 97)
    cout << (char)tolower(A) << endl;
  else
    cout << (char)toupper(A) << endl;

  return 0;
}