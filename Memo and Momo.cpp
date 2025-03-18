#include <iostream>

using namespace std;

int main()
{
  long long A, B, K;
  cin >> A >> B >> K;

  if ((A % K == 0) && (B % K == 0))
    cout << "Both";
  else if (A % K == 0)
    cout << "Memo";
  else if (B % K == 0)
    cout << "Momo";
  else
    cout << "No One";

  return 0;
}