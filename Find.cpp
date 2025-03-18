#include <iostream>

using namespace std;

int main()
{
  int x, N, index = -1, flag = 1;
  cin >> N >> x;

  int a[N];

  for (int i = 0; i < N; i++)
  {
    cin >> a[i];

    if (a[i] == x && flag)
    {
      index = i;
      flag = 0;
    }
  }

  cout << ((index == -1) ? "Not Found" : to_string(index)) << endl;

  return 0;
}