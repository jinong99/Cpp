#include <iostream>
#include "Calculator.h"
using namespace std;

int main() {
    while (true) {
        int x, y;
        char o;
        cout << "�� ������ �����ڸ� �Է��ϼ��� (+, -, *, /): ";
        cin >> x >> y >> o;

        if (o == '+') {
            Add a;
            a.setValue(x, y);
            cout << "���: " << a.calculate() << endl;
        }
        else if (o == '-') {
            Sub s;
            s.setValue(x, y);
            cout << "���: " << s.calculate() << endl;
        }
        else if (o == '*') {
            Mul m;
            m.setValue(x, y);
            cout << "���: " << m.calculate() << endl;
        }
        else if (o == '/') {
            Div d;
            d.setValue(x, y);
            cout << "���: " << d.calculate() << endl;
        }
        else {
            cout << "�߸��� �������Դϴ�." << endl;
        }
    }
    return 0;
}