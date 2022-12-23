#include <iostream>
using namespace std;
using std::cout;
using std::endl;

const int size = 10;
int mas[size];
int sum = 0;


void summa();
int *str, *end;

void ch();
int a;
int b;
int c;
char oper;
void(*math(string))();
void plu();
void minu();

int main(){
  for (int i = 0; i < size; i++) {
    mas[i] = rand() % 10;
    cout << mas[i] << " ";
  }
  cout << endl;
  summa();

  ch();

  return 0;
}

void summa(){
  for(str = &mas[0], end = &mas[size-1];
    str < end; ++str, --end)
    sum += *str + *end;

    if (str == end) sum += *str;
    cout << sum << endl;
}

void ch(){
  cin >> oper;
  void(*op)();
    switch(oper){
      case '+':
        op = math("pl");
        op();
        break;
      case '-':
        op = math("mn");
        op();
        break;
    }
}

void(*math(string eq))()
{
  if (eq == "pl")
    return plu;
  else
    return minu;
}

void plu(){
  cin >> a;
  cin >> b;
  cout << a+b << endl;
}
void minu(){
  cin >> a;
  cin >> b;
  cout << a-b << endl;
}
