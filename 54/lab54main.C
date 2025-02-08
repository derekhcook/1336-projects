#include <lab54.h>
#include <cstdlib>

using namespace std;

int main()
{
  string words[100];
  unsigned int count = 0;

  while (count < 100 && cin >> words[count])
    ++count;

  cout << "Before Sort:" << endl;
  writeArray(cout, words, count);
  rightToLeftSort(words, count);
  cout << "After Sort:" << endl;
  writeArray(cout, words, count);

  return EXIT_SUCCESS;
}
