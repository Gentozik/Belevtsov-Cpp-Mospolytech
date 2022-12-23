#include<iostream>
#define OUTPUT(value) std:: cout << #value << " = " << value << '\n'

int func(int a = 1) {
    if (a <= 0) return 0;
    int sum = 0;
    for (int i = 1; i <= a; i++) sum += i;
    return sum;
}

void second_func(int first, int second, int &third, int &fourth) {
    third = first + second;
    fourth = first * second;
}

int main() {
    setlocale(LC_ALL, "rus");

    int arr[2][3];

    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 3; j++) arr[i][j] = (i + 1) * (j + 1);

    int sum = 0;
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 3; j++) sum += arr[i][j];
    std:: cout << "Array elements sum: " << sum << '\n';

    int second_arr[3];
    for (int i = 0; i < 3; i++) second_arr[i] = arr[0][i] + arr[1][i];
    std:: cout << "1D array: ";
    for (int i = 0; i < 3; i++) std:: cout << second_arr[i] << " ";
    std:: cout << '\n';

    float tmp = 20.84;
    float &ref = tmp;
    float &secondRef = tmp;
    ref = 5.2;
    OUTPUT(tmp);
    OUTPUT(ref);
    OUTPUT(secondRef);

    int a = 10, b = 20, c = 6, d = 8;
    second_func(a, b, c, d);
    OUTPUT(a);
    OUTPUT(b);
    OUTPUT(c);
    OUTPUT(d);

    int a1 = 69;
    OUTPUT(a1);
    for (int i = 0; i < 3; i++) {

        for (int i = 0; i < 2; i++) { // переменнаф из 1-ого пункта - массив
            for (int j = 0; j < 3; j++) std:: cout << arr[i][j] << " ";
            std:: cout << '\n';
        }
        int aba = 100;
        OUTPUT(a1);
    }
    // std:: cout << aba; - ошибка!
    return 0;
}
