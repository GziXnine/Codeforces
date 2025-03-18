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
  long long n;
  cin >> n;
 
  long long sum = (long long)((n * (n + 1)) / 2), sumGiven = 0;
  while (--n)
  {
    long long x;
    cin >> x;
 
    sumGiven += x;
  }
 
  cout << sum - sumGiven << "\n";
}