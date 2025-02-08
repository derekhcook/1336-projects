#include <lab64.h>
#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
  int n, d;
  Rational first( 1, -2 ), second( -3, 0 ), third;

  cout << "first = " << first.getNumerator() << '/' << first.getDenominator()
       << endl;
  cout << "second = " << second.getNumerator() << '/' 
       << second.getDenominator() << endl;
  cout << "third = " << third.getNumerator() << '/' << third.getDenominator()
       << endl;

  while (cin >> n >> d)
  {
    third.setNumerator(n);
    third.setDenominator(d);
    cout << "Before reduce() third = " 
         << third.getNumerator() << '/' << third.getDenominator();
    third.reduce();
    cout << " After reduce() third = " 
         << third.getNumerator() << '/' << third.getDenominator() << endl;
  }

  return EXIT_SUCCESS;
}
