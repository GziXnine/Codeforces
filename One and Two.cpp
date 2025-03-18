#include <bits/stdc++.h>
#include <algorithm>

using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve() 
{
  int t;
  cin >> t;
    
  while (t--) 
  {
    long long n, b, one = 0 , two = 0;
    cin >> n;
    vector <long long> v;

    for(long long i = 0 ; i < n ; i++) 
    {
      cin >> b;

      if(b == 1) 
        one++;
      else 
      {
        two++;
        v.push_back(i + 1);
      }
    }

    if(two & 1)
      cout << -1;
    else 
    {
      if(two == 0) 
        cout << 1;
      else 
      {
        long long si = v.size() / 2;
        si--;

        cout << v[si];
      }
    }
    cout << endl;
  }
}

int main() 
{
  FAST_IO;
  solve();

  return 0;
}