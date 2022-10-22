#include <iostream>
#include <string>
using namespace std;

int main(){
  int a;
  cin >> a;
  try {
    if ((a != 1) and (a != 2) and (a != 3)) throw "Exception: wrong unmber!";
    cout << "a = " << a << "\n";
  }
  catch (const char* msg) {
    std::cout << msg << "\n";
  }
}
