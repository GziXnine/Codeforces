#include <iostream>

using namespace std;

int main()
{
  int N;
  cin >> N;

  if (N > 2)
  {
    for (int i = 2; i <= N; i += 2)
      cout << i << endl;
  }
  else
    cout << -1 << endl;

  return 0;
}