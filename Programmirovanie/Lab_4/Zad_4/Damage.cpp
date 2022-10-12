#include <iostream>
using namespace std;
using std::cout;
using std::endl;

class Weapon{
  private:
    string name;
    int damage;
    int weight;

  public:
    friend class Characteristic;
    void setName(string W_name){name = W_name;}
    void setDamage(int W_damage){damage = W_damage;}
    void setWeight(int W_weight){weight = W_weight;}

    void getName(){
      cout << endl << "Name: " << name << endl;
    }

    void getDamage(){
      cout << "DMG: " << damage << endl;
    }

    void getWeight(){
      cout << "Weight: " << weight << endl << endl;
    }

    bool Wcheck(){
      int Wmax;
      cout << "Max weight?: ";
      cin >> Wmax;
      if (Wmax >= weight){
        cout << "Can carry" << endl;
        return true;
      } else {
        cout << "Can`t carry" << endl;
        return false;
      }
    }
};

class Characteristic{
  private:
    int strength;
  public:
    void setPower(int P_Power){strength = P_Power;}
    int GetDamage(Weapon& W){
      return strength + W.damage;
    }
};

int main() {
  string name;
  int damage;
  int weight;
  int strength;

  Characteristic C1;
  cin >> strength;
  C1.setPower(strength);

  Weapon W1;
  cin >> name;
  W1.setName(name);
  cin >> damage;
  W1.setDamage(damage);
  cin >> weight;
  W1.setWeight(weight);
  W1.getName();
  W1.getDamage();
  W1.getWeight();


  cout << endl;
  cout << "Damage per hit: " << C1.GetDamage(W1) << endl;
  return 0;
}
