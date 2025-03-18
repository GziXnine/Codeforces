#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
  long long nums[3];
  cin >> nums[0] >> nums[1] >> nums[2];

  long long x = nums[0];
  long long y = nums[1];
  long long z = nums[2];

  sort(nums, nums + 3);

  cout << nums[0] << endl
       << nums[1] << endl
       << nums[2] << endl
       << endl;

  cout << x << endl
       << y << endl
       << z << endl
       << endl;

  return 0;
}