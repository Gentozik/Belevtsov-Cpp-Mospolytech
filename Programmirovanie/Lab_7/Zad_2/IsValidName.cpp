#include <iostream>
#include<regex>
#include<string>
using namespace std;

bool isValidName(string name) {
    std::regex reg("^[A-Z]+[a-z]{1,32}$");
    return std::regex_search(name, reg);
}

int main() {
  string name;
  cout << "Enter your name (on English): ";

  cin >> name;
  if (isValidName(name) == true) {
    cout << "True" << endl;
  } else { cout << "False" << endl; }
  
  return 0;
}
