#include <iostream>
#include <iomanip>
#include <lab61.h>

using namespace std;

void testRealNumberFunctions(ostream&, const RealNumber&, string);

int main()
{
  RealNumber x, y(5.25);

  // Prepare for floating-point output format
  cout << fixed << showpoint << setprecision(2);

  testRealNumberFunctions(cout, x, "x");
  testRealNumberFunctions(cout, y, "y");

  x.setReal(x.getReal() + y.getReal() + 0.5);
  testRealNumberFunctions(cout, x, "x");

  y.setReal(y.getReal() * -1.0);
  testRealNumberFunctions(cout, y, "y");

  y.setReal(y.getReal() - 0.5);
  testRealNumberFunctions(cout, y, "y");

  x.setReal(1362.5);
  testRealNumberFunctions(cout, x, "x");

  y.setReal(-1362.5);
  testRealNumberFunctions(cout, y, "y");

  return 0;
}

void testRealNumberFunctions(ostream& out, const RealNumber& realNum,
                             string variableName)
{
  out << variableName + ".getReal() = " << realNum.getReal() << endl;
  out << variableName + ".round() = " << realNum.round() << endl;
  out << variableName + ".wholePart() = " << realNum.wholePart() << endl;
  out << variableName + ".fracPart() = " << realNum.fracPart() << endl << endl;
}
