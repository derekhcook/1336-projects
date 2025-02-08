#include <iostream>
#include <iomanip>
#include <string>
#include <lab65.h>

using namespace std;

int main()
{
  Time t1, t2;
  int hr1, min1, sec1, hr2, min2, sec2;

  cout << boolalpha;
  while (cin >> hr1 >> min1 >> sec1 >> hr2 >> min2 >> sec2)
  {
    t1.setTime(hr1, min1, sec1);
    cout << "t1 = ";
    t1.printStandard(cout);
    cout << endl;

    t2.setTime(hr2, min2, sec2);
    cout << "t2 = ";
    t2.printStandard(cout);
    cout << endl;

    cout << "t1 == t2 = " << t1.isEqualTo(t2) << endl;
    cout << "t1 <  t2 = " << t1.isEarlierThan(t2) << endl;

    cout << " Adding one second to t1 yields ";
    t1.addSecond();
    t1.printStandard(cout);
    cout << endl << endl;
  }

  return 0;
}
