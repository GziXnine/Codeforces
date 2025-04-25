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
  int n, q;
  cin >> n >> q;

  vector<int> a(n + 1, 0);
  for (int i = 1; i <= n; i++)
    cin >> a[i];

  vector<int> Agustin(n + 1, 0), Brian(n + 1, 0), countOne(n + 1, 0);

  for (int i = 1; i <= n; i++)
  {
    int x = a[i];
    if (isPowerOfTwo(x))
      Agustin[i] += x;
  
    if (x % 2 == 1)
      Brian[i] += x;

    if (x == 1)
      countOne[i] += x;

    // Prefix sum
    Agustin[i] += Agustin[i - 1];
    Brian[i] += Brian[i - 1];
    countOne[i] += countOne[i - 1];
  }

  while (q--)
  {
    int L, R;
    cin >> L >> R;

    ll A = Agustin[R] - Agustin[L - 1];
    ll B = Brian[R] - Brian[L - 1];
    ll one = countOne[R] - countOne[L - 1];

    A -= one;
    B -= one;

    if (one % 2)
      A += (one + 1) / 2;
    else
      A += (one / 2);

    B += (one / 2);
    
    cout << ((A > B) ? "A" : (B > A) ? "B"
                                         : "E")
         << '\n';
  }
}

signed main()
{
  fastIO();
  // fileIO();

  int t = 1;
  // cin >> t;

  while (t--)
    solve();

  return 0;
}