#pragma once
#include "Weapon.hpp"
class MagicWeapon : public Weapon
{
  private:
    int magicdamage;

  public:
    MagicWeapon(string name, int damage, int weight, string typo, int magicdamage){
      this->name = name;
      this->damage = damage;
      this->weight = weight;
      this->typo = typo;
      this->magicdamage = magicdamage;
    };

    MagicWeapon(){
      this->name = "Wand";
      this->damage = 3;
      this->weight = 2;
      this->typo = "Onehanded";
      this->magicdamage = 3;
    };

    void getMagicDamage(){
      cout << "Magic Damage: " << magicdamage << endl;
    }
};
