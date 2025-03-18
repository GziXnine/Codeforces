#include <bits/stdc++.h>
#include <algorithm>

using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve() 
{
  int t;
  cin >> t;
    
  while (t--) 
  {
    int a, b, c;
    cin >> a >> b >> c;

    int minNum = INT_MAX;

    // Or I Can Get A Middle Value And Check The Difference Between The Three Values I Study Math 5.
    for (int i = 0; i <= 10; i++)
      minNum = min(minNum, abs(a - i) + abs(b - i) + abs(c - i));

    cout << minNum << endl;
  }
}

int main() 
{
  FAST_IO;
  solve();

  return 0;
}