#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    fstream fs;
    fs.open("a.txt", ios::out);
    fs << "My table\nMy window";
    fs.close();

    fs.open("a.txt", ios::in);
    string data;
    fs >> data;
    cout << data<<endl;
    fs.close();
    fs.open("a.txt", ios::in);
    string line;
    data = "";
    while (getline(fs, line)) {
        data += line+"\n";
    }
    cout << data << endl;
    fs.close();

}
