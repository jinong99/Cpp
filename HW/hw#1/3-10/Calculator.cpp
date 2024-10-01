#include <iostream>
#include "Calculator.h"
using namespace std;

void Add::setValue(int x, int y) {
    a = x;
    b = y;
}

int Add::calculate() {
    return a + b;
}

void Sub::setValue(int x, int y) {
    a = x;
    b = y;
}

int Sub::calculate() {
    return a - b;
}

void Mul::setValue(int x, int y) {
    a = x;
    b = y;
}

int Mul::calculate() {
    return a * b;
}

void Div::setValue(int x, int y) {
    a = x;
    b = y;
}

int Div::calculate() {
    if (b == 0) {
        cout << "0으로 나눌 수 없습니다." << endl;
        return 0;
    }
    return a / b;
}
