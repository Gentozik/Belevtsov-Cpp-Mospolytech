#include "MagicWeapon.hpp"

enum t {ONEHANDED,TWOHANDED,BOW,CROSSBOW};
struct Player {
    string id;
    string name;
    string password;
};
void GetAuthInfo(Player& player) {
    cout << "ID: " << player.id << "\n";
    cout << "Name: " << player.name << "\n";
    cout << "Password: " << player.password << "\n";
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

  Weapon W1;
  cin >> name;
  W1.setName(name);
  cin >> damage;
  W1.setDamage(damage);
  cin >> weight;
  W1.setWeight(weight);

  cin >> t1;
  switch(t1){
    case (ONEHANDED): W1.setType("Onehanded"); break;
    case (TWOHANDED): W1.setType("Twohanded"); break;
    case (BOW): W1.setType("Bow"); break;
    case (CROSSBOW): W1.setType("Crossbow"); break;
  }

  W1.getName();
  W1.getDamage();
  W1.getWeight();
  W1.getType();
  cout << endl;

  // Player info (Structure)
  Player player1 = {"226d7c9a-56e4-4f30-93d4-968b7de5f86f", "Gentozik", "CE900Ml@"};
  GetAuthInfo(player1);

  // MagicWeapon Class
  MagicWeapon W2("Book of Flames", 2, 2, "Onehanded", 3);
  W2.getName();
  W2.getDamage();
  W2.getWeight();
  W2.getType();
  W2.getMagicDamage();

  MagicWeapon W3 = MagicWeapon();
  W3.getName();
  W3.getDamage();
  W3.getWeight();
  W3.getType();
  W3.getMagicDamage();
}
