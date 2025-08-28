

#include <iostream>
using namespace std;

#define MAX 5   // Maximum size of the stack

class Stack {
    int arr[MAX];  // Array to store stack elements
    int top;       // Index of the top element

public:
    Stack() { top = -1; }

    void push(int x) {
        if (isFull()) {
            cout << "Stack Overflow\n";
            return;
        }
        arr[++top] = x;
        cout << x << " pushed into stack\n";
    }

    void pop() {
        if (isEmpty()) {
            cout << "Stack Underflow\n";
            return;
        }
        cout << arr[top--] << " popped from stack\n";
    }

    bool isEmpty() {
        return top == -1;
    }

    bool isFull() {
        return top == MAX - 1;
    }

    void peek() {
        if (isEmpty()) {
            cout << "Stack is Empty\n";
            return;
        }
        cout << "Top element: " << arr[top] << "\n";
    }

    void display() {
        if (isEmpty()) {
            cout << "Stack is Empty\n";
            return;
        }
        cout << "Stack elements: ";
        for (int i = top; i >= 0; i--) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
};

int main() {
    Stack s;
    char choice;

    do {
        cout << "\n---- STACK MENU ----\n";
        cout << "P - Push\n";
        cout << "O - Pop\n";
        cout << "E - isEmpty\n";
        cout << "F - isFull\n";
        cout << "D - Display\n";
        cout << "K - Peek\n";
        cout << "X - Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (tolower(choice)) {
            case 'p': {
                int val;
                cout << "Enter value to push: ";
                cin >> val;
                s.push(val);
                break;
            }
            case 'o':
                s.pop();
                break;
            case 'e':
                cout << (s.isEmpty() ? "Stack is Empty\n" : "Stack is not Empty\n");
                break;
            case 'f':
                cout << (s.isFull() ? "Stack is Full\n" : "Stack is not Full\n");
                break;
            case 'd':
                s.display();
                break;
            case 'k':
                s.peek();
                break;
            case 'x':
                cout << "Exiting program...\n";
                break;
            default:
                cout << "Invalid choice. Try again.\n";
        }
    } while (tolower(choice) != 'x');

    return 0;
}


