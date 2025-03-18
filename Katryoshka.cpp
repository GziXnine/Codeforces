#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  unsigned long long int E, M, B, res = 0;
  cin >> E >> M >> B;

  if (E == 0 || B == 0)
    cout << "0\n";
  else if (M == 0)
  {
    unsigned long long int Q = min(E, B);
    cout << ((Q == B) ? (E / 2 <= B) ? E / 2 : B : (E >= 2) ? E / 2
                                                            : 0);
  }
  else
  {
    unsigned long long int Q = min(E, min(M, B));
    E -= Q;
    M -= Q;
    B -= Q;
    res += Q;
    if (M == 0)
    {
      unsigned long long int Q = min(E, B);
      res += ((Q == B) ? (E / 2 <= B) ? E / 2 : B : (E >= 2) ? E / 2
                                                             : 0);
      cout << res << endl;
    }
    else if (B == 0 || E == 0)
      cout << res << endl;
  }

  return 0;
}
