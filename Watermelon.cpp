#include <iostream>

using namespace std;

int main()
{
  int watermelon = 0;
  cin >> watermelon;

  cout << (((watermelon % 2 == 0) && (watermelon > 2)) ? "YES\n" : "NO\n");

  return 0;
}