#include "../lib/std_lib_facilities.h"

int main()
{
  cout << "Please enter your first name and age (followed by 'enter'):\n";
  string first_name = "???";
  double age = 0;
  cin >> first_name >> age;
  cout << "Hello, " << first_name << " (age by month: " << age * 12 << ")!\n";
  return 0;
}
