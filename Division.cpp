#include <iostream>

using namespace std;

int main()
{
  int tries = 0, rating = 0;

  cin >> tries;

  while (tries--)
  {
    cin >> rating;
    cout << (rating <= 1399 ? "Division 4" : rating <= 1599 ? "Division 3"
                                         : rating <= 1899   ? "Division 2"
                                                            : "Division 1")
         << endl;
  }

  return 0;
}