#pragma once
#include "Weapon.hpp"
class MagicWeapon : public Weapon
{
  private:
    int magicdamage;

  public:
    MagicWeapon(string name, int damage, int weight, string typo, int magicdamage) : Weapon(name, damage, weight, typo){
      this->name = name;
      this->damage = damage;
      this->weight = weight;
      this->typo = typo;
      this->magicdamage = magicdamage;
    };

    MagicWeapon():Weapon(){
      this->name = "Wand";
      this->damage = 3;
      this->weight = 2;
      this->typo = "Onehanded";
      this->magicdamage = 3;
    };

    int getDamage(){
      return magicdamage + damage;
    }

    void showStats(){
      cout << endl << "Name: " << getName() << endl;
      cout << "DMG: " << getDamage() << " ( " << damage << " (physic) + " << magicdamage << " (magic) ) "<< endl;
      cout << "Weight: " << getWeight() << endl;
      cout << "Type: " << getType() << endl;
    }

    friend void DmgComparsiom(Weapon Wep1, Weapon Wep2);
};
