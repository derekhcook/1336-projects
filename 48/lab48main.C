#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

// Function replaceDigits replaces each digit character of s with '#';
// all other characters are left unchanged. The transformed string is
// returned to the calling function.
string replaceDigits(string s);

int main()
{
  string str;

  while (getline(cin, str))
  {
    cout << "Before:  " << str << endl;
    str = replaceDigits(str);
    cout << " After:  " << str << endl;
  }

  return EXIT_SUCCESS;
}
