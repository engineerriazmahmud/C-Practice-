#include <iostream>
using namespace std;

int main()
{
  int p = 5;
  int &q = p;
  p++;
  cout << p;

  cout << &p << endl;
  cout << &q << endl;

  return 0;
}