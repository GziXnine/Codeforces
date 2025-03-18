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
  unsigned long long int L, R, N;
  int count = 0;

  cin >> L >> R >> N;

  cout << (R - L + 1) - ((R / N) - (L - 1) / N);
}