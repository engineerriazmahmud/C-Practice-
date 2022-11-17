#include <iostream>
using namespace std;

// global variable
int p = 23;
int main()
{
  // local variable
  int p = 32;
  p++;

  cout << "Value of local variable p is: " << p << endl;
  cout << "Value of global variable p is : " << ::p;
}