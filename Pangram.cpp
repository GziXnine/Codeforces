#include <iostream>
#include <cctype>
#include <string>

using namespace std;

int main()
{
  int N;
  bool seen[26] = {false};
  cin >> N;

  string s;
  cin >> s;

  if (N < 26)
  {
    cout << "NO" << endl;
    return 0;
  }

  for (int i = 0; i < N; i++)
    seen[tolower(s[i]) - 'a'] = true;

  for (int i = 0; i < 26; i++)
  {
    if (!seen[i])
    {
      cout << "NO" << endl;
      return 0;
    }
  }

  cout << "YES" << endl;

  return 0;
}