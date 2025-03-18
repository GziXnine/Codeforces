#include <iostream>
#include <string>

using namespace std;

int main()
{
  string s;
  cin >> s;

  int check = 0;
  for (int i = 0; i < s.size() / 2; i++)
  {
    if (s[i] == s[s.size() - i - 1])
      continue;
    else
      check++;
  }

  if (check == 1 || (check <= 1 && s.size() % 2 != 0))
    cout << "YES" << endl;
  else
    cout << "NO" << endl;

  return 0;
}