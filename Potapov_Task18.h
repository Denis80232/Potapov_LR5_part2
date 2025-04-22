#ifndef _POTAPOV_TASK18_H_
#define _POTAPOV_TASK18_H_
#include <string>
#include <stdexcept>
using namespace std;

int getIntegerPartOfDifference(double x, double y) {
    return static_cast<int>(x - y);
}

double getFractionalPartOfDifference(double x, double y) {
    double diff = x - y;
    return diff - static_cast<int>(diff);
}

void EnterDouble(double& var, const string& label) {
    string rawInput;
    cout << label << " = ";
    getline(cin, rawInput);

    try {
        var = stod(rawInput);
    } catch (...) {
        cerr << "Ошибка ввода! Повторите попытку." << endl;
        EnterDouble(var, label);
    }
}
#endif