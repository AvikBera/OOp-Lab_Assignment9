// Q1: Write a function template maximum() that accepts two values and
// returns the greater value. Test it with integers and floating-point
// numbers.

#include <iostream>
using namespace std;

template <typename T>
T maximum(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    int i1 = 25, i2 = 48;
    float f1 = 12.5f, f2 = 9.8f;

    cout << "Maximum of " << i1 << " and " << i2 << " = "
         << maximum(i1, i2) << endl;

    cout << "Maximum of " << f1 << " and " << f2 << " = "
         << maximum(f1, f2) << endl;

    return 0;
}
