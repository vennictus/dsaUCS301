//Question 1
// #include <iostream>
// using namespace std;

// #define MAX 5   // queue size

// class Queue {
//     int arr[MAX];
//     int front, rear;
// public:
//     Queue() { front = -1; rear = -1; }

//     bool isEmpty() {
//         return front == -1;
//     }

//     bool isFull() {
//         return rear == MAX - 1;
//     }

//     void enqueue(int x) {
//         if (isFull()) {
//             cout << "Queue is FULL\n";
//             return;
//         }
//         if (isEmpty()) front = 0;
//         arr[++rear] = x;
//         cout << "Enqueued: " << x << endl;
//     }

//     void dequeue() {
//         if (isEmpty()) {
//             cout << "Queue is EMPTY\n";
//             return;
//         }
//         cout << "Dequeued: " << arr[front] << endl;
//         if (front == rear) {
//             front = rear = -1;
//         } else front++;
//     }

//     void peek() {
//         if (isEmpty()) cout << "Queue empty!\n";
//         else cout << "Front element: " << arr[front] << endl;
//     }

//     void display() {
//         if (isEmpty()) {
//             cout << "Queue empty!\n";
//             return;
//         }
//         cout << "Queue: ";
//         for (int i = front; i <= rear; i++) cout << arr[i] << " ";
//         cout << endl;
//     }
// };


// int main() {
//     Queue q;
//     int ch, val;

//     do {
//         cout << "\n--- SIMPLE QUEUE MENU ---\n";
//         cout << "1. Enqueue\n2. Dequeue\n3. Peek\n4. Display\n5. Exit\n";
//         cout << "Enter choice: ";
//         cin >> ch;

//         switch (ch) {
//             case 1: cout << "Enter value: "; cin >> val; q.enqueue(val); break;
//             case 2: q.dequeue(); break;
//             case 3: q.peek(); break;
//             case 4: q.display(); break;
//         }
//     } while (ch != 5);

//     return 0;
// }


// //Question 2
// #include <iostream>
// using namespace std;

// #define MAX 5

// class CircularQueue {
//     int arr[MAX];
//     int front, rear;

// public:
//     CircularQueue() { front = -1; rear = -1; }

//     bool isEmpty() { return front == -1; }

//     bool isFull() { return (rear + 1) % MAX == front; }

//     void enqueue(int x) {
//         if (isFull()) {
//             cout << "Queue FULL!\n";
//             return;
//         }
//         if (isEmpty()) front = 0;
//         rear = (rear + 1) % MAX;
//         arr[rear] = x;
//         cout << "Enqueued: " << x << endl;
//     }

//     void dequeue() {
//         if (isEmpty()) {
//             cout << "Queue EMPTY!\n";
//             return;
//         }
//         cout << "Dequeued: " << arr[front] << endl;

//         if (front == rear) front = rear = -1;
//         else front = (front + 1) % MAX;
//     }

//     void peek() {
//         if (isEmpty()) cout << "Queue EMPTY!\n";
//         else cout << "Front element: " << arr[front] << endl;
//     }

//     void display() {
//         if (isEmpty()) {
//             cout << "Queue EMPTY!\n";
//             return;
//         }
//         cout << "Circular Queue: ";
//         int i = front;
//         while (true) {
//             cout << arr[i] << " ";
//             if (i == rear) break;
//             i = (i + 1) % MAX;
//         }
//         cout << endl;
//     }
// };

// int main() {
//     CircularQueue q;
//     int ch, val;

//     do {
//         cout << "\n--- CIRCULAR QUEUE MENU ---\n";
//         cout << "1. Enqueue\n2. Dequeue\n3. Peek\n4. Display\n5. Exit\n";
//         cout << "Enter choice: ";
//         cin >> ch;

//         switch (ch) {
//             case 1: cout << "Enter value: "; cin >> val; q.enqueue(val); break;
//             case 2: q.dequeue(); break;
//             case 3: q.peek(); break;
//             case 4: q.display(); break;
//         }
//     } while (ch != 5);

//     return 0;
// }

// //Question 3
// #include <iostream>
// #include <queue>
// using namespace std;

// void interleave(queue<int> &q) {
//     int n = q.size();
//     if (n % 2 != 0) {
//         cout << "Queue size must be even!\n";
//         return;
//     }

//     queue<int> firstHalf;

//     for (int i = 0; i < n / 2; i++) {
//         firstHalf.push(q.front());
//         q.pop();
//     }

//     while (!firstHalf.empty()) {
//         q.push(firstHalf.front());
//         firstHalf.pop();
//         q.push(q.front());
//         q.pop();
//     }
// }

// int main() {
//     queue<int> q;
//     int x, n;

//     cout << "Enter number of elements: ";
//     cin >> n;

//     cout << "Enter queue elements: ";
//     for (int i = 0; i < n; i++) {
//         cin >> x;
//         q.push(x);
//     }

//     interleave(q);

//     cout << "Interleaved Queue: ";
//     while (!q.empty()) {
//         cout << q.front() << " ";
//         q.pop();
//     }
// }


// //Question 4
// #include <iostream>
// #include <queue>
// using namespace std;

// int main() {
//     queue<char> q;
//     int freq[26] = {0};

//     char ch;

//     cout << "Enter characters (end with #): ";

//     while (cin >> ch && ch != '#') {
//         q.push(ch);
//         freq[ch - 'a']++;

//         while (!q.empty() && freq[q.front() - 'a'] > 1) {
//             q.pop();
//         }

//         if (q.empty()) cout << -1 << " ";
//         else cout << q.front() << " ";
//     }

//     return 0;
// }


// //Question 5 A
// #include <iostream>
// #include <queue>
// using namespace std;

// class Stack2Q {
//     queue<int> q1, q2;

// public:
//     void push(int x) {
//         q2.push(x);
//         while (!q1.empty()) {
//             q2.push(q1.front());
//             q1.pop();
//         }
//         swap(q1, q2);
//     }

//     void pop() {
//         if (q1.empty()) {
//             cout << "Stack Underflow\n";
//             return;
//         }
//         cout << "Popped: " << q1.front() << endl;
//         q1.pop();
//     }

//     void top() {
//         if (q1.empty()) {
//             cout << "Empty stack\n";
//             return;
//         }
//         cout << "Top: " << q1.front() << endl;
//     }
// };

//Question 5 B
#include <iostream>
#include <queue>
using namespace std;

class Stack1Q {
    queue<int> q;

public:
    void push(int x) {
        int size = q.size();
        q.push(x);

        while (size--) {
            q.push(q.front());
            q.pop();
        }
    }

    void pop() {
        if (q.empty()) {
            cout << "Stack Underflow\n";
            return;
        }
        cout << "Popped: " << q.front() << endl;
        q.pop();
    }

    void top() {
        if (q.empty()) {
            cout << "Empty stack\n";
            return;
        }
        cout << "Top: " << q.front() << endl;
    }
};
