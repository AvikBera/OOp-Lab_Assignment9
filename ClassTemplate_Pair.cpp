// Q5: Create a class template Pair that stores two values, which may have
// different data types. Implement functions to display both values. Test
// it with an integer and a string.

#include <iostream>
#include <string>
using namespace std;

template <typename T1, typename T2>
class Pair {
    T1 first;
    T2 second;
public:
    Pair(T1 f, T2 s) : first(f), second(s) {}

    void display() {
        cout << "First value = " << first << endl;
        cout << "Second value = " << second << endl;
    }
};

int main() {
    Pair<int, string> p1(101, "Hello World");

    cout << "Pair of integer and string:" << endl;
    p1.display();

    Pair<string, double> p2("Pi value", 3.14159);

    cout << "\nPair of string and double:" << endl;
    p2.display();

    return 0;
}
