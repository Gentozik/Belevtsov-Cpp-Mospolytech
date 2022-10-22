#include <iostream>
using namespace std;
using std::cout;
using std::endl;

class Player {
private:
    int health;
public:
    Player(int health) {
      if (health < 0) throw logic_error("Health < 0");
      else if (health > 100) throw range_error("Health > 100");
      else if (health == 0) throw exception();
      this->health = health;
    }
    int getHealth() {
        return health;
    }
};
