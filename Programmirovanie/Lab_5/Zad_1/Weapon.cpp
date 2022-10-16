#include "Weapon.hpp"

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
  cout << endl;

  Player player1 = {"226d7c9a-56e4-4f30-93d4-968b7de5f86f", "Gentozik", "CE900Ml@"};
  GetAuthInfo(player1);
}
