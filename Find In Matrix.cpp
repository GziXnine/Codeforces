#include <iostream>

using namespace std;

int main()
{
  int N, M, x, found = 0;
  cin >> N >> M;

  int arr[N][M];

  for (int i = 0; i < N; i++)
    for (int j = 0; j < M; j++)
      cin >> arr[i][j];

  cin >> x;

  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < M; j++)
    {
      if (arr[i][j] == x)
      {
        found = 1;
        break;
      }
    }

    if (found == 1)
      break;
  }

  if (found)
    cout << "YES";
  else
    cout << "NO";

  return 0;
}