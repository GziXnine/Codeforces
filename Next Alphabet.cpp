#include <iostream>

using namespace std;

int main()
{
  char ALPHA;
  cin >> ALPHA;

  cout << ((ALPHA == 122) ? (char)97 : (char)(ALPHA + 1));

  return 0;
}