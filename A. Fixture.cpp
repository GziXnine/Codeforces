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

void solve()
{
  int n;
  cin >> n;

  vector<int> a(n + 1, 0);
  int curr = 0, maxcurr = 0;
  for(int i = 1; i <= n; i++)
  {
    int x;
    cin >> x;

    if(x == 1)
    {
      a[i]++;
      curr++;
      maxcurr = max(maxcurr, curr);

      if(curr >= 3)
        a[i]++;
    }
    else
    {
      a[i]--;
      curr = 0;
    }
  }

  vector<int> pre = a;
  for(int i = 1; i <= n; i++)
    pre[i] = pre[i - 1] + a[i];

  cout << pre.back() << ' ';
}

signed main()
{
  fastIO();
  // fileIO();
  
  int t = 1;
  // cin >> t;

  while(t--)
    solve();

  return 0;
}