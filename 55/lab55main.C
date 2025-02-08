#include <iostream>
#include <cstdlib>
#include <lab55.h>

using namespace std;

int main()
{
  string str;

  while (getline(cin, str))
  {
    cout << str << " is ";
    if (!isPalindrome(str))
      cout << "not ";
    cout << "a palindrome" << endl;
  }

  return EXIT_SUCCESS;
}
