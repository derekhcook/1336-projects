#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <bitset>
#include <climits>

using namespace std;

// printLine:  prints a horizontal line of length hyphens to output
// stream os 
void printLine(int length, ostream& os);

// compress:  compresses age, grade, sex, and GPA into the lower 16
// bits of an unsigned int
unsigned int compress(unsigned int age, unsigned int grade, char sex, double GPA);

const int N = sizeof(int) * CHAR_BIT; // # of bits in an int

int main()
{
  unsigned int age, grade, compressed;
  char sex;
  double GPA;

  // Prepare for floating-point output format; show one digit after the
  // decimal point
  cout << fixed << showpoint << setprecision(1);

  printLine(78, cout);
  cout << setw(76) << "33222222222211111111110000000000" << endl;
  cout << "  Age    Grade    Sex    GPA    Compress    "
       << "10987654321098765432109876543210" << endl;
  printLine(78, cout);

  while (cin >> age >> grade >> sex >> GPA)
  {
    compressed = compress(age, grade, sex, GPA);
    cout << setw(5) << age << setw(8) << grade << setw(7) << sex
         << setw(8) << GPA << setw(11) << compressed << setw(5) << " "
         << bitset<N>(compressed) << endl;
  }

  printLine(78, cout);

  return EXIT_SUCCESS;
}

void printLine(int length, ostream& os)
{
  char ch = os.fill();
  os << setfill('-') << setw(length) << "-" << setfill(ch) << endl;
}
