#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

// Function passwordVerifier returns true if string password
// represents a valid password and false otherwise. A valid 
// password must
//   1) be at least six characters long,
//   2) contain at least one uppercase letter,
//   3) contain at least one lowercase letter, and
//   4) contain at least one digit character.
bool passwordVerifier(string password);

int main()
{
  string password;

  while (getline(cin, password))
  {
    cout << password << " is ";
    if (!passwordVerifier(password))
      cout << "in";
    cout << "valid" << endl;
  }

  return EXIT_SUCCESS;
}
