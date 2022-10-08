#include <iostream>
using std::cout;
using std::endl;

int a = 25;
int *pa = &a;

int b[4] = {20,27,38,44};
int *pb = b;

int c = 5;
int *const pc = &c;

int main()
{
  cout << "pointer = " << pa << endl;
  cout << "*pointer = " << *pa << endl;

  *pa = 420;
  cout << "a = " << a << endl;
  cout << "pointer = " << pa << endl;
  cout << "*pointer = " << *pa << endl;


  for (int i=0; i<4; i++)
  {
      cout << "b[" << i << "] = " << *(b+i) << endl;
  }

  cout << "c = " << c << endl;
  //pc = &22;
  *pc = 22;
  cout << "c = " << c << endl;
  return 0;
}
