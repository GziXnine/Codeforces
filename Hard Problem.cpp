#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

int main()
{
  array<long long, 3> arr;
  cin >> arr[0] >> arr[1] >> arr[2];

  sort(arr.begin(), arr.end());
  cout << arr[0] << " " << arr[1] << " " << arr[2] << endl;

  return 0;
}