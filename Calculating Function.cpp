#include <iostream>

using namespace std;

// long long func(int n)
// {
//   return n == 0 ? 1 : n * pow(-1, n) + func(n - 1);
// }

int main()
{
  long long num = 0;
  cin >> num;

  // YouTube: https://www.youtube.com/watch?v=l05GHz2j-o8
  cout << (num % 2 == 0 ? num / 2 : (num + 1) / 2 * -1) << endl;
  return 0;
}