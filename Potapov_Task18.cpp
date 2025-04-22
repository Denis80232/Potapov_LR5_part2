#include <iostream>
#include <cmath>
#include "Potapov_Task18.h"

using namespace std;

int main() {
    double x = 0, y = 0;
    EnterDouble(x, "Введите число x");
    EnterDouble(y, "Введите число y");

    cout << "Целая часть разности: " << getIntegerPartOfDifference(x, y) << endl;
    cout << "Дробная часть разности: " << getFractionalPartOfDifference(x, y) << endl;

    return 0;
}