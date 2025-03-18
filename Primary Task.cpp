#include <bits/stdc++.h>
#include <string>

using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve() 
{
  int t;
  cin >> t;
    
  while (t--) 
  {
    bool flag = false;
    string s;
    cin >> s;

    if (s.length() >= 3) 
    {
      string leftPart = s.substr(0, 2);
      string rightPart = s.substr(2);

      int leftNum = std::stoi(leftPart);

      bool isValidRight = true;
        for (char c : rightPart) 
        {
          if (!isdigit(c)) {
            isValidRight = false;
            break;
          }
        }

      if (leftNum == 10 && isValidRight) 
      {
        int rightNum = std::stoi(rightPart);

        if (rightPart[0] == '0') 
          flag = false;
        else if (rightNum >= 2)
          flag = true;
        else 
          flag = false;
      } 
      else 
        flag = false;
    } 
    else 
      flag = false;

    cout << (flag ? "YES" : "NO") << endl;
  }
}

int main() 
{
  FAST_IO;
  solve();

  return 0;
}