#include <iostream>
#include <iomanip>
#include <string>
#include <lab63.h>

using namespace std;

void testTimeFunctions(const Time& t, string name, ostream& os);

int main()
{
  Time t1, t2(6), t3(9, 30), t4(14, 2, 3);

  testTimeFunctions(t1, "t1", cout);
  testTimeFunctions(t2, "t2", cout);
  testTimeFunctions(t3, "t3", cout);
  testTimeFunctions(t4, "t4", cout);

  t1.setTime(131, 5, 7); // invalid hour
  testTimeFunctions(t1, "t1", cout);

  t1.setTime(1, 60, 59); // invalid minute
  testTimeFunctions(t1, "t1", cout);

  t1.setTime(24, 6, 100); // invalid hour & second
  testTimeFunctions(t1, "t1", cout);

  t1.setTime(23, 59, 59);
  testTimeFunctions(t1, "t1", cout);

  return 0;
}

void testTimeFunctions(const Time& t, string name, ostream& os)
{
  os << name << ".printStandard() = ";
  t.printStandard(os);
  os << ' ' << name << ".isAM() = " 
     << boolalpha << setw(5) << left << t.isAM()
     << ' ' << name << ".timeToSeconds() = " 
     << setw(5) << right << t.timeToSeconds() << endl;
}
