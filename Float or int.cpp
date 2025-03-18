#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  float N;
  cin >> N;

  if (fmod(N, 1) == 0)
    cout << "int " << int(N) << endl;
  else
    cout << "float " << int(N) << " " << N - int(N) << endl;

  return 0;
}