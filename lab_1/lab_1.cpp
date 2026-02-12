#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    cout << "ex 1" << endl;
    cout << "---------------------" << endl;
    //функция
    double x0 = 0;
    cout << "first arg (0,4]: ";
    cin >> x0;
    if (x0 < 0 or x0 > 4)
        cout << "error";
    double k = (4.0 - x0) / 9.0;
    for (int i = 0; i < 10; i++)
    {
        double x = x0 + i * k;
        double f = sin(x) / x;
        cout << x << "\t " << f << endl;

    }
    cout << "ex 2" << endl;
    cout << "---------------------" << endl;
    //фибоначчи
    int max = 0;
    int s = 1;
    int n = 2;
    int pred = 0;
    int cur = 1;
    int next = 0;
    cout << "max: ";
    cin >> max;
    while (s <= max) {
        next = pred + cur;
        pred = cur;
        cur = next;
        s = s + next;
        n = n + 1;


    }
    cout << "number: " << n << endl;
    cout << "summa: " << s << endl;
    return 0;
}



