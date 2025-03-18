
#include <iostream>

using namespace std;

int main()
{
  int N;
  cin >> N;

  long long arr[51];
  arr[1] = 0;
  arr[2] = 1;

  for (int i = 3; i <= N; i++)
    arr[i] = arr[i - 1] + arr[i - 2];

  cout << arr[N] << endl;

  return 0;
}