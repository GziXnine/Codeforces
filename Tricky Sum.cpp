#include <iostream>

using namespace std;

/*
  Me4 men ChatGPT ana Fhemto men Repo 3la Github b3d '3' sa3at nom 'G3an Nooom :D'
*/

int main()
{
  int tries = 0, numOne = 0;
  cin >> tries;

  while (tries--)
  {
    cin >> numOne;

    long long sum = ((long long)numOne * (numOne + 1) / 2);
    long long powOf2 = 1;

    while (powOf2 <= numOne)
    {
      sum -= powOf2 * 2;
      powOf2 *= 2;
    }

    cout << sum << '\n';
  }

  return 0;
}