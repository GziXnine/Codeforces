#include <iostream>

using namespace std;

int main()
{
  int N;
  cin >> N;

  int a[N];

  for (int i = 0; i < N; i++)
  {
    cin >> a[i];
  }

  for (int i = 0; i < N; i++)
  {
    if (a[i] <= 10)
      cout << "A[" << i << "] = " << a[i] << endl;
  }

  return 0;
}