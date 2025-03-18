#include <iostream>

using namespace std;

int main()
{
  int N;
  cin >> N;

  for (int i = 0; i < N; ++i)
  {
    for (int x = 0; x < i + 1; ++x)
      cout << "*";

    cout << endl;
  }

  return 0;
}