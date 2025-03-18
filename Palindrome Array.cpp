#include <iostream>

using namespace std;

int main()
{
  int N;
  cin >> N;

  int arr[N];

  for (int i = 0; i < N; i++)
    cin >> arr[i];

  for (int i = 0; i < N / 2; i++)
  {
    if (arr[i] != arr[N - i - 1])
    {
      cout << "No";
      return 0;
    }
  }

  cout << "Yes";

  return 0;
}