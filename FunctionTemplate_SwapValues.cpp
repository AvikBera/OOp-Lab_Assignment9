// Q2: Write a function template swapValues() to exchange two values.
// Demonstrate it using integers and characters.

#include <iostream>
using namespace std;

template <typename T>
void swapValues(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int i1 = 10, i2 = 20;
    char c1 = 'A', c2 = 'Z';

    cout << "Before swap: i1 = " << i1 << ", i2 = " << i2 << endl;
    swapValues(i1, i2);
    cout << "After swap:  i1 = " << i1 << ", i2 = " << i2 << endl;

    cout << "Before swap: c1 = " << c1 << ", c2 = " << c2 << endl;
    swapValues(c1, c2);
    cout << "After swap:  c1 = " << c1 << ", c2 = " << c2 << endl;

    return 0;
}
