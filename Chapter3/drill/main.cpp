#include "../../lib/std_lib_facilities.h"

int main()
{
  cout << "Enter the name of the person you want to write to (followed by 'enter'):\n";
  string first_name;
  cin >> first_name;

  cout << "Enter the name of another person you want to mention (followed by 'enter'):\n";
  string friend_name;
  cin >> friend_name;

  cout << "Enter 'm' if the latter friend is male, 'f' if female:\n";
  char friend_sex;
  cin >> friend_sex;
  string friend_pronoun;
  if (friend_sex == 'm')
  {
    friend_pronoun = "him";
  }
  else
  {
    friend_pronoun = "her";
  }

  cout << "Enter the age of the recipient:\n";
  int age;
  cin >> age;
  if (age < 0 || 110 < age)
  {
    simple_error("You are kidding!");
  }
  string message_on_age;
  if (age < 12)
  {
    message_on_age = "Next year you well be " + (age + 1) + '\n';
  }
  else if (age == 17)
  {
    message_on_age = "Next year you will be able to vote.\n";
  }
  else if (70 < age)
  {
    message_on_age = "I hope you are enjoying retirement.\n";
  }

  cout
    << '\n'
    << "Dear " << first_name << ", \n"
    << '\n'
    << "  How are you? I am fine. I am looking forward to seeing you soon.\n"
    << '\n'
    << "  Have you seen " << friend_name << " lately?\n"
    << "If you see " << friend_name << " please ask " << friend_pronoun << " to call me.\n"
    << '\n'
    << "  I hear you just had a birthday and you are " << age << " years old. Congratulations.\n"
    << message_on_age
    << '\n'
    << "Yours sincerely.\n"
    << '\n'
    << '\n'
    << "sato11\n"
    << '\n';

  return 0;
}
