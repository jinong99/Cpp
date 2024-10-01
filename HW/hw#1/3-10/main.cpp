#include <iostream>
#include "Calculator.h"
using namespace std;

int main() {
    while (true) {
        int x, y;
        char o;
        cout << "두 정수와 연산자를 입력하세요 (+, -, *, /): ";
        cin >> x >> y >> o;

        if (o == '+') {
            Add a;
            a.setValue(x, y);
            cout << "결과: " << a.calculate() << endl;
        }
        else if (o == '-') {
            Sub s;
            s.setValue(x, y);
            cout << "결과: " << s.calculate() << endl;
        }
        else if (o == '*') {
            Mul m;
            m.setValue(x, y);
            cout << "결과: " << m.calculate() << endl;
        }
        else if (o == '/') {
            Div d;
            d.setValue(x, y);
            cout << "결과: " << d.calculate() << endl;
        }
        else {
            cout << "잘못된 연산자입니다." << endl;
        }
    }
    return 0;
}