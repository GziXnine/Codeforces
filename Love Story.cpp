#include <bits/stdc++.h>

using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int calcDifference(string &a, string &b) 
{
  int difference = 0;

  for (int i = 0; i < a.size(); i++)
  {
    if (a[i] != b[i])
      difference++;
  }

  return difference;
}

void solve() 
{
  int t;
  string a = "codeforces";
  cin >> t;
    
  while (t--) 
  {
    string b;
    cin >> b;

    int difference = calcDifference(a, b);

    cout << difference << endl;
  }
}

int main() 
{
  FAST_IO;
  solve();

  return 0;
}