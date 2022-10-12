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
      this->damage = 25;
      this->weight = 7;
    };

    void showstats(){
      cout << "Name: " << name << endl << "DMG: " << damage << endl << "Weight: " << weight << endl << endl;
    }

    void Wcheck(){
      int Wmax;
      cout << "Max weight? :";
      cin >> Wmax;
      if (Wmax <= weight){
        cout << "Can carry";
      } else {
        cout << "Can`t carry";
      }
    }
};

int main(){
  Weapon W1("Bow",15,4);
  W1.showstats();
  W1.Wcheck();

  Weapon W2 = Weapon();
  W2.showstats();
  W2.Wcheck();
}
