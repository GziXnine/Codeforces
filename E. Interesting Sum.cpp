#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define int ll

void fileIO(void)
{
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
}

void fastIO(void)
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
}


bool isPowerOfTwo(int n)
{
  return n > 0 && (n & (n - 1)) == 0;
}

void solve()
{
  int n;
  cin >> n;

  vector<int> a(n, 0);
  for (int i = 0; i < n; i++)
    cin >> a[i];

  sort(a.begin(), a.end());
  cout << (a[n - 1] - a[0]) + (a[n - 2] - a [1]) << '\n';
}

signed main()
{
  fastIO();
  // fileIO();
  
  int t = 1;
  cin >> t;

  while(t--)
    solve();

  return 0;
}