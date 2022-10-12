#include <iostream>
using namespace std;
using std::cout;
using std::endl;

class Weapon{
  public:
    string name;
    int damage;
    int weight;

    Weapon(string name, int damage, int weight){
      this->name = name;
      this->damage = damage;
      this->weight = weight;
    };

    Weapon(){
      this->name = "Sword";
      this->damage = 40;
      this->weight = 10;
    };

    void showstats(){
      cout << endl << "Name: " << name << endl << "DMG: " << damage << endl << "Weight: " << weight << endl << endl;
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

    int summ1(int _weight) {
        return _weight + weight;
    }

    int Wsum(Weapon& W){
      return summ1(W.weight);
    }
};
