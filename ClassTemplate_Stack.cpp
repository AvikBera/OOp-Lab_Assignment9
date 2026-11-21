// Q6: Implement a class template Stack using an array. Include functions
// push(), pop(), and display(). Handle stack overflow and underflow
// conditions.

#include <iostream>
using namespace std;

template <typename T>
class Stack {
    T *arr;
    int top;
    int capacity;
public:
    Stack(int size) {
        capacity = size;
        arr = new T[capacity];
        top = -1;
    }

    ~Stack() {
        delete[] arr;
    }

    void push(T value) {
        if (top == capacity - 1) {
            cout << "Stack Overflow! Cannot push " << value << endl;
            return;
        }
        arr[++top] = value;
        cout << value << " pushed onto the stack." << endl;
    }

    void pop() {
        if (top == -1) {
            cout << "Stack Underflow! Cannot pop, stack is empty." << endl;
            return;
        }
        cout << arr[top] << " popped from the stack." << endl;
        top--;
    }

    void display() {
        if (top == -1) {
            cout << "Stack is empty." << endl;
            return;
        }
        cout << "Stack elements (top to bottom): ";
        for (int i = top; i >= 0; i--)
            cout << arr[i] << " ";
        cout << endl;
    }
};

int main() {
    Stack<int> s(3);   // capacity of 3

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);        // triggers overflow
    s.display();

    s.pop();
    s.pop();
    s.pop();
    s.pop();           // triggers underflow
    s.display();

    return 0;
}
