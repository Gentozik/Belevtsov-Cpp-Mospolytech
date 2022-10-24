#include "Year.hpp"

int main(){
  try {
    Player p(96);
    std::cout << "Health: " << p.getHealth();
  }
  catch (PlayerException err) {
    std::cout << "PlayerException: " << err.what();
  }
}
