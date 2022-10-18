#include <iostream>
using namespace std;
using std::cout;
using std::endl;

class Weapon{
  protected:
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
    Weapon(string name, int damage, int weight, string typo){
      this->name = name;
      this->damage = damage;
      this->weight = weight;
      this->typo = typo;
    };
    Weapon(){
      this->name = "Sword";
      this->damage = 8;
      this->weight = 10;
      this->typo = "Twohanded";
    };

    void setName(string W_name){name = W_name;}
    void setDamage(int W_damage){damage = W_damage;}
    void setWeight(int W_weight){weight = W_weight;}
    void setType(string W_typo){typo = W_typo;}

    string getName(){
      return name;
    }
    virtual int getDamage(){
      return damage;
    }
    int getWeight(){
      return weight;
    }
    string getType(){
      return typo;
    }

    virtual void showStats(){
      cout << endl << "Name: " << getName() << endl;
      cout << "DMG: " << getDamage() << " (physic) "<< endl;
      cout << "Weight: " << getWeight() << endl;
      cout << "Type: " << getType() << endl;
    }
    bool operator > (Weapon& W);
    bool operator == (Weapon& W);
    bool operator < (Weapon& W);
};
