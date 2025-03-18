#include <iostream>

using namespace std;

int main()
{
  long long A, B, C;
  cin >> A >> B >> C;

  int Y = min(A, min(B, C));
  int X = max(A, max(B, C));
  cout << Y << " " << X << endl;

  return 0;
}