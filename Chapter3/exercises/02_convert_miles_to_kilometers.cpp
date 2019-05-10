#include "../../lib/std_lib_facilities.h"

int main()
{
  double mile_by_kilometers = 1.609;
  double miles = 0;
  cout << "Enter a distance in miles and I will convert it to kilometers:\n";
  cin >> miles;

  cout << miles << " miles are " << (miles * mile_by_kilometers) << " kilometers.\n";

  return 0;
}
