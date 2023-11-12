#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

        int a, b, c;

        cout << "Введіть три цілих числа: ";
        cin >> a >> b >> c;

        if (a == b) {
            cout << "Число 3 є відмінним від чисел 1 і 2." << endl;
        }
        else if (a == c) {
            cout << "Число 2 є відмінним від чисел 1 і 3." << endl;
        }
        else {
            cout << "Число 1 є відмінним від чисел 2 і 3." << endl;
        }

        float a1, r, x, y;
        bool ar1, ar2;
        cin >> a1 >> r;
        if (cin && r < a1 / 2) {
            cin >> x >> y;
            ar1 = x < 0 && y < a1 / 2.0 && y > -x && x * x + y * y > r * r;
            ar2 = y > 0 && y < x && x * x + y * y < r * r;
            if (ar1 || ar2) cout << "In" << endl;
            else cout << "out" << endl;
        }
        else {
            cout << "Неправильне значення" << endl;
        }

        return 0;
}



