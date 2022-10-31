#include <iostream>
#include <string>
using namespace std;

int main() {
  string strin;
  cout << "Enter string (on English): ";

  cin >> strin;
  cout << strin.substr(1, 3) << endl;

  if (strin.find("a") == std::string::npos){
    cout << "Symbol 'a' wasn`t found ";
  } else {
    cout << strin.find("a") << endl;
  }

  return 0;
}
