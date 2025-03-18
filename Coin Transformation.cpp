#include <bits/stdc++.h>

using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve() 
{
  int t;
  cin >> t;
    
  while (t--) 
  {
    long long a;
    cin >> a;

    long long cnt = 1;
    while (1)
    {
      if(a < 4)
        break;

      a /= 4;
      cnt *= 2;
    }
    
    cout << cnt << endl;
  }
}

int main() 
{
  FAST_IO;
  solve();

  return 0;
}