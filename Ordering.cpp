#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
  int N;
  cin >> N;

  int arr[N];

  for (int i = 0; i < N; i++)
    cin >> arr[i];

  sort(arr, arr + N);

  for (int i = 0; i < N; i++)
    cout << arr[i] << " ";

  cout << endl;

  for (int i = N - 1; i >= 0; i--)
    cout << arr[i] << " ";

  cout << endl;

  return 0;
}