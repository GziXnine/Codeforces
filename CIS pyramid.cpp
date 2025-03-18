#include <bits/stdc++.h>
 
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve();
 
int main() 
{
  FAST_IO;
  solve();
 
  return 0;
}
 
void solve()
{
  int n;
  cin >> n;
 
  for (int i = 0; i < n; i++)
  {
    cout << string(n - i - 1, ' ');
    cout << string(2 * i + 1, '*') << "\n";
  }
}
 
// 1 2 3 4 5
// 1 3 5 7 9
// (2 * i - 1)
 
/*
  *
 ***
*****
*/
// (n - i - 1)