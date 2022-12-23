#include <iostream>


using namespace std;

const int size = 10;
int mas[size];
int sum = 0;


int main(){
for (int i = 0; i < size; i++) {
    mas[i] = rand() % 10;
    cout << mas[i] << " ";
}
cout << endl;
int *str, *end;
for(str = &mas[0], end = &mas[size-1]; str < end; ++str, --end)
    sum += *str + *end;
if (str == end) sum += *str;
cout << sum << endl;
  return 0;
}
