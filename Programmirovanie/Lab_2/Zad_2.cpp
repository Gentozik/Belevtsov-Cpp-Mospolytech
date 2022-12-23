#include <iostream>
#include <string>

using namespace std;

int main()
{
    int a;
    int i;
    int sum = 0;
    while(true)
    {
        cout << "Input positive integer number: ";
        cin >> a;
        if (a >= 0)
        {
          break;
        }
        else
        {
        cout << "Wrong number!" << endl;
        }
    }
    for ( i = 1; i <= a; i++)
    {
        sum = sum + i;
    }
    cout << "Summa: " << sum << endl;



    int nums[10] = {12, 50, 31, 16, 37, 32, 3, 26, 15, 35};
    for ( i = 1; i <= 10; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;
    for ( i = 1; i <= 10; i++)
    {
        if (i % 2 == 0)
        {
            cout << nums[i] << " ";
        }
    }
    cout << endl;
    for ( i = 1; i <= 10; i++)
    {
        if (i % 2 == 1)
        {
            cout << nums[i] << " ";
        }
    }
    return 0;
}
