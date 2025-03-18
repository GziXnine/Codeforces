#include <bits/stdc++.h>

using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int calcDifference(string &a, string &b) 
{
  int difference = 0;

  for (int i = 0; i < a.size(); i++)
    difference += abs(a[i] - b[i]);

  return difference;
}

void solve() 
{
  int t;
  cin >> t;
    
  while (t--) 
  {
    int n, m;
    cin >> n >> m;

    vector<string> words(n);
        
    for (int i = 0; i < n; i++)
      cin >> words[i];
        
    int minDiff = INT_MAX;
        
    for (int i = 0; i < n; i++)
      for (int j = i + 1; j < n; j++)
          minDiff = min(minDiff, calcDifference(words[i], words[j])); // ChatGPT Enhancement.
        
    cout << minDiff << endl;
  }
}

int main() 
{
  FAST_IO;
  solve();

  return 0;
}