#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	double radius;
	fstream fs;
	cout << "Enter radius: ";
	cin >> radius;
	double S = trunc(2 * M_PI * radius * 1000) / 1000;
	cout << S;
	string s = to_string(S);
	cout << s << endl;

	fs.open("perimeter.txt", ios::out);
	fs << s;
	fs.close();

	string data;
	fs.open("perimeter.txt", ios::in);
	fs >> data;
	cout << data << endl;
	fs.close();

/*	string add;
	string show;
	while (true){
		cin >> add;

		if (add == "read"){
			fs.open("Math.txt", std::ios::in);
			fs >> show;
			std::cout << show << endl;
			fs.close();
			continue;
		}

		if (add == "erase"){
			fs.open("Math.txt", std::ios::out | std::ios::trunc);
			fs.close();
		}

		if (add == "exit"){
			break;
		}

		fs.open("Math.txt", std::ios::out);
		fs << add;
		fs.close();
	}*/
}
