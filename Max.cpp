#include <iostream>

using namespace std;

int main()
{
  int N;
  cin >> N;

  int nums[N];

  for (int i = 0; i < N; ++i)
    cin >> nums[i];

  int maxNum = 0;
  for (int i = 0; i < N; ++i)
  {
    if (maxNum < nums[i])
      maxNum = nums[i];
  }
  cout << maxNum << endl;

  return 0;
}