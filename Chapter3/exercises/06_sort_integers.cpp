#include "../../lib/std_lib_facilities.h"

int main()
{
  int first, second, third = 0;
  cout << "Enter three integer values:\n";
  cin >> first >> second >> third;

  array<int, 3> integers = {first, second, third};
  sort(integers.begin(), integers.end());
  for (int i = 0; i < integers.size(); i++)
  {
    if (i != 0)
      cout << ", ";
    cout << integers[i];
  }
  cout << '\n';

  return 0;
}
