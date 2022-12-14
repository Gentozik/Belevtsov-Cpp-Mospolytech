#include "MagicWeapon.hpp"

enum t {ONEHANDED,TWOHANDED,BOW,CROSSBOW};
struct Player {
    string id;
    string name;
    string password;
};

bool Weapon::operator > (Weapon& W){
  return this->getDamage() > W.getDamage();
}

bool Weapon::operator == (Weapon& W){
  return this->getDamage() == W.getDamage();
}

bool Weapon::operator < (Weapon& W){
  return this->getDamage() < W.getDamage();
}

int main()
{
  // Weapon type (Enum)
  string name;
  int damage;
  int weight;
  string typo;
  t type = ONEHANDED;
  int t1 = type;

  // MagicWeapon Class
  Weapon W1("Spirit bow", 5, 3, "Bow");
  W1.getName();
  W1.getDamage();
  W1.getWeight();
  W1.getType();
  W1.showStats();

  MagicWeapon W2("Book of Flames", 4, 2, "Twohanded", 3);
  W2.getName();
  W2.getDamage();
  W2.getWeight();
  W2.getType();
  W2.showStats();

  MagicWeapon W3 = MagicWeapon();
  W3.getName();
  W3.getDamage();
  W3.getWeight();
  W3.getType();
  W3.showStats();

  cout << endl;
  cout << (W1 > W2) << endl;
  cout << (W1 < W2) << endl;
  cout << (W1 == W2) << endl;
  cout << (W2 > W3) << endl;
  cout << (W2 < W3) << endl;
  cout << (W2 == W3) << endl;
  cout << (W3 > W1) << endl;
  cout << (W3 < W1) << endl;
  cout << (W3 == W1) << endl;
}
