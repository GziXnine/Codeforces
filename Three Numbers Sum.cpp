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
  int k, s;
  cin >> k >> s;
 
  long long count = 0;
 
  for (int i = 0; i <= k; i++) // O(k)
  {
    for (int j = 0; j <= k; j++) // O(k)
    {
      int z = s - i - j; // O(1) => ChatGPT
      
      if (z >= 0 && z <= k) // O(1)
        count++;
    }
  } // O(k^2 + 1) 3000^2 + 1 = 9_000_001
  
  cout << count;
}