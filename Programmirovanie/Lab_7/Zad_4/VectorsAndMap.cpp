#include <iostream>
#include <vector>
#include <list>
#include <map>

using namespace std;

class Settings{
  public:
    std::map<std::string, int> map;
    void Add(std::string s, int i){
      map[s] = i;
    }
    int Get(std::string s){
      return map[s];
    }
    void Print(){
      for (auto i = map.begin(); i != map.end(); i++) {
        std::cout << i->first << " = " << i->second << "\n";
      }
    }
};


void print(vector<float> vec) {
  for (float i: vec){
    cout << i << ' ';
  }
  cout << endl;
}

int main()
{

	vector<float> v1;
  for (int i=1; i<6; i++){
    float a;
    cin >> a;
    v1.push_back(a);
  }
  print(v1);

  auto i = v1.begin();
  i = i + 3;
  v1.insert(i, 50.2);
  print(v1);

  v1.pop_back();
  print(v1);

  cout << "----------------" << endl;

  Settings s1 = Settings();
  s1.Add("Brightness", 100);
  s1.Add("Volume", 80);
  s1.Add("Dark mode", 1);
  cout << s1.Get("Brightness") << endl;
  cout << s1.Get("Volume") << endl;
  cout << s1.Get("Dark mode") << endl;
  s1.Print();


return 0;
}
