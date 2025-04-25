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
  int n, k;
  cin >> n >> k;

  bool flag = true;
  int rem = 2023;
  for (int i = 0; i < n; ++i)
  {
    int x;
    cin >> x;

    if (rem % x == 0)
      rem /= x;
    else
      flag = false;
  }

  if (!flag)
  {
    cout << "NO\n";
    return;
  }
  else
  {
    cout << "YES\n";
    cout << rem << ' ';

    for (int i = 0; i < k - 1; i++)
      cout << "1 ";

    cout << '\n';
  }
}

signed main()
{
  fastIO();
  // fileIO();

  int t = 1;
  cin >> t;

  while (t--)
    solve();

  return 0;
}