#include <bits/stdc++.h>

using namespace std;
#define FAST_IO                 \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);

string s;
int n;
vector<vector<int>> memo;

bool isPalindrome(int l, int r);
void solve();

int main()
{
  FAST_IO;
  solve();

  return 0;
}

bool isPalindrome(int l, int r)
{
  if (l >= r)
    return true;

  if (memo[l][r] != -1)
    return memo[l][r] == 1;

  if (s[l] != s[r])
  {
    memo[l][r] = 0;
    return false;
  }

  bool ans = isPalindrome(l + 1, r - 1);
  memo[l][r] = ans ? 1 : 0;

  return ans;
}

void solve()
{
  cin >> s;

  n = s.size();
  memo.assign(n, vector<int>(n, -1));

  int q;
  cin >> q;

  while (q--)
  {
    int l, r;
    cin >> l >> r;
    l--;
    r--;

    cout << (isPalindrome(l, r) ? "YES" : "NO") << "\n";
  }
}