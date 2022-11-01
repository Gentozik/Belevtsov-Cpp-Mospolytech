#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
  double radius;
  cout << "Enter radius: ";
  cin >> radius;
  double S = trunc(2 * M_PI * radius * 1000) / 1000;
  string s = to_string(S);

  fstream fs;
    fs.open("Math.txt", ios::out);
    fs << s;
    fs.close();

    fs.open("Math.txt", ios::out);
    fs << s;
  	fs.close();

  string add;
  string show;
  while (true){
    cin >> add;
      if (add == "read"){
        fs.open("Math.txt", ios::in | ios::app);
      	fs >> show;
      	std::cout << show << endl;
      	fs.close();
      	continue;
      }
      if (add == "erase"){
      	fs.open("Math.txt", ios::trunc);
        fs << "";
      	fs.close();
        continue;
      }
      if (add == "exit"){
      	break;
      }
      fs.open("Math.txt", ios::out | ios::app);
      fs << add;
      fs.close();
  }
}
