#include <iostream>

using namespace std;

int main()
{
  int N, Q;
  cin >> N;

  for (int i = 0; i < N; ++i)
  {
    cin >> Q;

    long long X = 1;
    for (int x = 1; x <= Q; ++x)
      X *= x;

    cout << X << endl;
  }

  return 0;
}
