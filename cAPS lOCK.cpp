#include <iostream>
#include <cctype>
#include <string>

using namespace std;

int main()
{
  bool flag = false;
  string name;
  cin >> name;

  for (int i = 1; i < name.size(); i++)
  {
    if (islower(name[i]))
    {
      flag = true;
      break;
    }
  }

  if (!flag)
  {
    for (int i = 0; i < name.size(); i++)
    {
      if (islower(name[i]))
        cout << char(toupper(name[i]));
      else
        cout << char(tolower(name[i]));
    }
  }
  else
    cout << name;

  return 0;
}