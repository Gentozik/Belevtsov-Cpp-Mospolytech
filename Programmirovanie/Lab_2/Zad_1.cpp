#include <iostream>
#include <string>

using namespace std;

float a, b;
int main(){
  cout << "Enter number 1: ";
  cin >> a;

  cout << "Enter number 2: ";
  cin >> b;

  cout << "Average: " << ((a + b) / 2) << endl;



  cout << "Enter operation type: (+, -, *, /): ";
  char type;
  cin >> type;

  // if (type == '+')
  //     {
  //       cout << "Result: " << (a + b) << endl;
  //     }
  // else if (type == '-')
  //     {
  //       cout << "Result: " << (a - b) << endl;
  //     }
  // else if (type == '*')
  //     {
  //       cout << "Result: " << (a * b) << endl;
  //     }
  // else if (type == '/')
  //     {
  //       cout << "Result: " << (a / b) << endl;
  //     }

  switch (type)
      {
        case '+':
          cout << (a + b);
          return 0;
        case '-':
          cout << (a - b);
          return 0;
        case '*':
          cout << (a * b);
          return 0;
        case '/':
          cout << (a / b);
          return 0;
        default:
          return 0.0;
      }
  return 0;
}
