#include "../../lib/std_lib_facilities.h"

int main()
{
  cout << "Enter the name of ther person you want to write to (followed by 'enter'):\n";
  string first_name;
  cin >> first_name;
  cout
    << '\n'
    << "Dear " << first_name << ", \n";
  return 0;
}
