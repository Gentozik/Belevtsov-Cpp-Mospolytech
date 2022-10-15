#include <iostream>
#include "Type.hpp"
using namespace std;
using std::cout;
using std::endl;

class Weapon{
  private:
    string name;
    int damage;
    int weight;
    string typo;
    enum t {
          ONEHANDED = 0,
          TWOHANDED = 1,
          BOW = 2,
          CROSSBOW = 3
    };

  public:
    friend class Characteristic;
    void setName(string W_name){name = W_name;}
    void setDamage(int W_damage){damage = W_damage;}
    void setWeight(int W_weight){weight = W_weight;}
    void setType(string W_typo){typo = W_typo;}

    void getName(){
      cout << endl << "Name: " << name << endl;
    }

    void getDamage(){
      cout << "DMG: " << damage << endl;
    }

    void getWeight(){
      cout << "Weight: " << weight << endl;
    }

    void getType(){
      cout << "Type: " << typo << endl;
    }
};
