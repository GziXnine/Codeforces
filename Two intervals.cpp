#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  long long A, B, C, D;
  cin >> A >> B >> C >> D;

  if (min(B, D) >= max(A, C))
    cout << max(A, C) << " " << min(B, D);
  else
    cout << -1;

  return 0;
}