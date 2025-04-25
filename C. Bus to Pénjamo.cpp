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
  int n, r;
  cin >> n >> r;

  vector<int> a(n);
  for (int &x : a)
    cin >> x;

  int canSeat = 0, Sum = 0;
  for (int i = 0; i < n; ++i)
  {
    canSeat += 2 * (a[i] / 2); // 0 -> 0 -> 2 -> 4
    Sum += a[i] % 2;           // 1 -> 2 -> 2 -> 2
    r -= a[i] / 2;             // 5 -> 5 -> 4 -> 3
  }

  if (Sum < r)
    canSeat += Sum; // 2
  else
    canSeat += r * 2 - Sum;

  cout << canSeat << '\n';
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