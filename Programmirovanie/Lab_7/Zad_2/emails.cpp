#include <iostream>
#include<regex>
#include<string>
using namespace std;

int main() {
std::regex reg("[\\w\\.\\-]+@[\\w\\.\\-]+");
string emails = "My test text, in order to check and catch emails by regular expression. Let's say my email will be here: mymail@gmail.com , and here will be my friend's email: myfriend@mail.ru . Also, I'll assume that my mom's email will be here: i_love_my_mom@yandex.ru and my dad: i_love_my_father@rambler.ru Brother and Sister email: brother-mail@inbox.ru, sister-mail@inbox.ru" ;
std::smatch matches;
  while (std::regex_search(emails, matches, reg)) {
        std::cout << matches[0] << " ";
        std::cout << "\n";
        emails = matches.suffix().str();
      }
}
