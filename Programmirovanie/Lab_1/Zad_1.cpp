// подключение библиотеки ввода/вывода
#include <iostream>

// подключение пространства имён std в глобальную область видимости
using namespace std;

// создание главной функции
int main() {
  // установка русской локали
  setlocale(LC_ALL, "Russian");

  // вывод первой строки задания
  cout << "First string" << endl;
  // вывод второй строки задания
  cout << "First string\nSecond string" << endl;
  // вывод третьей строки задания
  cout << "Symbols \"\\\"" << endl;

  // возращаем 0 - код успешного завершения программы
  return 0;
  // конец функции main
}
