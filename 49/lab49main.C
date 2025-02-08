#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

// Function stringReverse reverses the characters of string s; that is,
// the function exchanges the first and last characters, the second and
// next-to-last characters, and so on. The transformed string is 
// returned to the calling function.
string stringReverse(string s);

int main()
{
  string str, reverse;

  while (getline(cin, str))
  {
    cout << "Before:  " << str << endl;
    reverse = stringReverse(str);
    cout << " After:  " << reverse << endl;
  }

  return EXIT_SUCCESS;
}
