#include "Weapon.hpp"

enum t {ONEHANDED,TWOHANDED,BOW,CROSSBOW};

int main()
{
  string name;
  int damage;
  int weight;
  string typo;
  t type = ONEHANDED;
  int t1 = type;

  Weapon W1;
  cin >> name;
  W1.setName(name);
  cin >> damage;
  W1.setDamage(damage);
  cin >> weight;
  W1.setWeight(weight);
  cin >> t1;

  switch(t1){
    case (ONEHANDED): typo = "Onehanded"; break;
    case (TWOHANDED): typo = "Twohanded"; break;
    case (BOW): typo = "Bow"; break;
    case (CROSSBOW): typo = "Crossbow"; break;
  }
  W1.setType(typo);

  W1.getName();
  W1.getDamage();
  W1.getWeight();
  W1.getType();
}
