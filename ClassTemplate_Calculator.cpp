// Q3: Implement a class template Calculator that stores two values and
// provides functions to perform addition, subtraction, multiplication,
// and division.

#include <iostream>
using namespace std;

template <typename T>
class Calculator {
    T value1, value2;
public:
    Calculator(T v1, T v2) : value1(v1), value2(v2) {}

    T add() {
        return value1 + value2;
    }

    T subtract() {
        return value1 - value2;
    }

    T multiply() {
        return value1 * value2;
    }

    double divide() {
        if (value2 == 0) {
            cout << "Error: Division by zero!" << endl;
            return 0;
        }
        return static_cast<double>(value1) / value2;
    }
};

int main() {
    Calculator<int> calc1(20, 4);

    cout << "Integer Calculator (20, 4):" << endl;
    cout << "Addition = " << calc1.add() << endl;
    cout << "Subtraction = " << calc1.subtract() << endl;
    cout << "Multiplication = " << calc1.multiply() << endl;
    cout << "Division = " << calc1.divide() << endl;

    Calculator<double> calc2(7.5, 2.5);

    cout << "\nDouble Calculator (7.5, 2.5):" << endl;
    cout << "Addition = " << calc2.add() << endl;
    cout << "Subtraction = " << calc2.subtract() << endl;
    cout << "Multiplication = " << calc2.multiply() << endl;
    cout << "Division = " << calc2.divide() << endl;

    return 0;
}
