#include <iostream>
#include "Weight.hpp"
using namespace std;
using std::cout;
using std::endl;


int main(){
  Weapon W1("Bow",25,5);
  W1.showstats();
  W1.Wcheck();

  Weapon W2 = Weapon();
  W2.showstats();
  W2.Wcheck();

  cout << endl;
  cout << "Weapon weight sum: " << W1.Wsum(W2) << endl;
}
