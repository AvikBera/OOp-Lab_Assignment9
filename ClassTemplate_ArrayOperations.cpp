// Q4: Create a class template ArrayOperations that stores an array of
// elements and provides functions to display the elements and find the
// largest element.

#include <iostream>
using namespace std;

template <typename T>
class ArrayOperations {
    T *arr;
    int size;
public:
    ArrayOperations(T *inputArr, int n) {
        size = n;
        arr = new T[size];
        for (int i = 0; i < size; i++)
            arr[i] = inputArr[i];
    }

    ~ArrayOperations() {
        delete[] arr;
    }

    void display() {
        cout << "Array elements: ";
        for (int i = 0; i < size; i++)
            cout << arr[i] << " ";
        cout << endl;
    }

    T findLargest() {
        T largest = arr[0];
        for (int i = 1; i < size; i++) {
            if (arr[i] > largest)
                largest = arr[i];
        }
        return largest;
    }
};

int main() {
    int intArr[] = {12, 45, 7, 89, 23};
    ArrayOperations<int> intOps(intArr, 5);

    intOps.display();
    cout << "Largest element = " << intOps.findLargest() << endl;

    double dblArr[] = {3.4, 9.8, 1.2, 7.6};
    ArrayOperations<double> dblOps(dblArr, 4);

    cout << endl;
    dblOps.display();
    cout << "Largest element = " << dblOps.findLargest() << endl;

    return 0;
}
