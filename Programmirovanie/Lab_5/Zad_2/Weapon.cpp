#include "MagicWeapon.hpp"

enum t {ONEHANDED,TWOHANDED,BOW,CROSSBOW};
struct Player {
    string id;
    string name;
    string password;
};
void DmgComparsiom(Weapon Wep1, Weapon Wep2){
  if (Wep1.getDamage() > Wep2.getDamage()){
    cout << endl << Wep1.getName() << " is more powerful than " << Wep2.getName() << " " << Wep1.getDamage() << " " << Wep2.getDamage() << endl;
  } else if (Wep1.getDamage() < Wep2.getDamage()){
    cout << endl << Wep2.getName() << " is more powerful than " << Wep1.getName() << " " << Wep2.getDamage() << " " << Wep1.getDamage() << endl;
  } else cout << "Both are powerful equally"<< endl;
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

  MagicWeapon W2("Book of Flames", 2, 2, "Twohanded", 3);
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

  DmgComparsiom(W1,W2);
  DmgComparsiom(W2,W3);
  DmgComparsiom(W3,W1);
}
