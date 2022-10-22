#include "Year.hpp"

int main(){
  try {
    Player p(96);
    std::cout << "Health: " << p.getHealth();
  }
  catch (std::logic_error err) {
    std::cout << "logic error: " << err.what();
  }
  catch (std::range_error err) {
    std::cout << "range error: " << err.what();
  }
  catch (std::exception err) {
    std::cout << "exception: " << err.what();
  }
}
