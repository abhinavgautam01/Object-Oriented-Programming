#include <iostream>
using namespace std;

class Stack {
private:
    int top;            // Index of the top element
    int maxSize;        // Maximum size of the stack
    int* stackArray;    // Pointer to the stack array

public:
    // Constructor
    Stack(int size) {
        maxSize = size;
        stackArray = new int[maxSize];
        top = -1; // Stack is initially empty
    }

    // Destructor to free memory
    ~Stack() {
        delete[] stackArray;
    }

    // Push operation
    void push(int value) {
        if (top >= maxSize - 1) {
            cout << "Stack Overflow! Cannot push " << value << endl;
            return;
        }
        stackArray[++top] = value; // Increment top and insert the value
        cout << value << " pushed into the stack." << endl;
    }

    // Pop operation
    void pop() {
        if (top < 0) {
            cout << "Stack Underflow! No elements to pop." << endl;
            return;
        }
        cout << stackArray[top--] << " popped from the stack." << endl;
    }

    // Peek operation
    int peek() {
        if (top < 0) {
            cout << "Stack is empty. No top element." << endl;
            return -1;
        }
        return stackArray[top];
    }

    // Check if stack is empty
    bool isEmpty() {
        return top < 0;
    }

    // Display all elements in the stack
    void display() {
        if (top < 0) {
            cout << "Stack is empty." << endl;
            return;
        }
        cout << "Stack elements: ";
        for (int i = top; i >= 0; i--) {
            cout << stackArray[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    int size, choice, value;

    cout << "Enter the size of the stack: ";
    cin >> size;

    Stack stack(size);

    do {
        cout << "\nStack Operations Menu:\n";
        cout << "1. Push\n2. Pop\n3. Peek\n4. Display\n5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter the value to push: ";
            cin >> value;
            stack.push(value);
            break;

        case 2:
            stack.pop();
            break;

        case 3:
            value = stack.peek();
            if (value != -1) {
                cout << "Top element is: " << value << endl;
            }
            break;

        case 4:
            stack.display();
            break;

        case 5:
            cout << "Exiting program." << endl;
            break;

        default:
            cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 5);

    return 0;
}
