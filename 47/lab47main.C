#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

// Function uppercase converts each lowercase character of s to its
// uppercase equivalent; all other characters are left unchanged. The
// transformed string is returned to the calling function.
string uppercase(string s);

int main()
{
  string str;

  while (getline(cin, str))
  {
    cout << "Before:  " << str << endl;
    str = uppercase(str);
    cout << " After:  " << str << endl;
  }

  return EXIT_SUCCESS;
}
