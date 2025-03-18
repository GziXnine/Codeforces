#include <iostream>

using namespace std;

int main()
{
  int N = 0, even = 0, odd = 0, positive = 0, negative = 0;
  cin >> N;

  int arr[N];
  for (int i = 0; i < N; ++i)
    cin >> arr[i];

  for (int i = 0; i < N; ++i)
  {
    if (arr[i] > 0)
      positive++;
    if (arr[i] < 0)
      negative++;
    if (arr[i] % 2 == 0)
      even++;
    if (arr[i] % 2 != 0)
      odd++;
  }
  cout << "Even: " << even << "\nOdd: " << odd << "\nPositive: " << positive << "\nNegative: " << negative << endl;

  return 0;
}
