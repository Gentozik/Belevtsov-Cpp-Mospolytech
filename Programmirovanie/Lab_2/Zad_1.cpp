#include <iostream>
#include <string>

using namespace std;

#define vN(var) string(#var)

int main()
{
    int a = 42, b = 22, c = 25;

    cout << "Summa: " << (a + b + c) << endl;
    cout << "Raznitsa: " << (a - b - c) << endl;
    cout << "Proizvedenie: " << (a * b * c) << endl;
    cout << "Chastnoe: " << (a / b / c) << endl;

    cout << "Ostatok ot a/b: " << (a % b) << endl;

    cout << "Resultat: (((145 - 100 / 20) / 20) * 50) + 45 = "
         << ((((145 - 100 / 20) / 20) * 50) + 45) << endl;

    int x = 3, y = 7;
    int res1, res2, res3;
    int lres1, lres2, lres3;

    res1 = (x & y);
    res2 = (x | y);
    res3 = (x ^ y);
    lres1 = ~res1;
    lres2 = res1 >> 1;
    lres3 = res1 << 1;
    cout << "res1: " << res1 << endl;
    cout << "res2: " << res2 << endl;
    cout << "res3: " << res3 << endl;
    cout << "lres1: " << lres1 << endl;
    cout << "lres2: " << lres2 << endl;
    cout << "lres3: " << lres3 << endl;

    bool BoolTrue = 1, BoolFalse = 0;

    cout << "Logicheskii resultat: " << (BoolTrue && (BoolTrue && (BoolTrue && BoolTrue || BoolFalse) && (BoolFalse || BoolTrue != BoolFalse))) << endl;

    cout << "Resultat logicheskih operatscii nad chislami: " << (25 < 48 && (23 > (3 + 15) || (2 < 8 && (5 >= 2 && 15 < 15)))) << endl;
    return 0;
  }
