#include "Year.hpp"

int main(){
  try {
    Year y(-34);
    std::cout << "Thank you!";
  }
  catch (YearException err) {
    std::cout << "Wrong: " << err.what();
  }
}
