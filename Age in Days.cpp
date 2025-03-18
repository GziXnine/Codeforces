#include <iostream>

using namespace std;

int main()
{
  long N;
  cin >> N; // 400

  long year = N / 365;
  long month = (N - (year * 365)) / 30;
  int day = N - ((year * 365) + (month * 30));

  cout << year << " years\n"
       << month << " months\n"
       << day << " days\n";

  return 0;
}