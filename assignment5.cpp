//Question 1
// #include <iostream>
// using namespace std;

// struct Node {
//     int data;
//     Node* next;
// };

// Node* head = NULL;

// void insertAtBeginning(int value) {
//     Node* newNode = new Node();
//     newNode->data = value;
//     newNode->next = head;
//     head = newNode;
//     cout << "Inserted at beginning.\n";
// }

// void insertAtEnd(int value) {
//     Node* newNode = new Node();
//     newNode->data = value;
//     newNode->next = NULL;

//     if (head == NULL) {
//         head = newNode;
//         cout << "Inserted at end.\n";
//         return;
//     }

//     Node* temp = head;
//     while (temp->next != NULL) temp = temp->next;
//     temp->next = newNode;
//     cout << "Inserted at end.\n";
// }

// void insertBefore(int key, int value) {
//     if (head == NULL) {
//         cout << "List empty!\n";
//         return;
//     }
//     if (head->data == key) {
//         insertAtBeginning(value);
//         return;
//     }

//     Node* temp = head;
//     while (temp->next != NULL && temp->next->data != key)
//         temp = temp->next;

//     if (temp->next == NULL) {
//         cout << "Key not found!\n";
//         return;
//     }

//     Node* newNode = new Node();
//     newNode->data = value;
//     newNode->next = temp->next;
//     temp->next = newNode;
//     cout << "Inserted before " << key << ".\n";
// }

// void insertAfter(int key, int value) {
//     Node* temp = head;
//     while (temp != NULL && temp->data != key)
//         temp = temp->next;

//     if (temp == NULL) {
//         cout << "Key not found!\n";
//         return;
//     }

//     Node* newNode = new Node();
//     newNode->data = value;
//     newNode->next = temp->next;
//     temp->next = newNode;
//     cout << "Inserted after " << key << ".\n";
// }

// void deleteBeginning() {
//     if (head == NULL) {
//         cout << "List empty!\n";
//         return;
//     }
//     Node* temp = head;
//     head = head->next;
//     delete temp;
//     cout << "Deleted from beginning.\n";
// }

// void deleteEnd() {
//     if (head == NULL) {
//         cout << "List empty!\n";
//         return;
//     }
//     if (head->next == NULL) {
//         delete head;
//         head = NULL;
//         cout << "Deleted from end.\n";
//         return;
//     }

//     Node* temp = head;
//     while (temp->next->next != NULL)
//         temp = temp->next;

//     delete temp->next;
//     temp->next = NULL;
//     cout << "Deleted from end.\n";
// }

// void deleteNode(int key) {
//     if (head == NULL) {
//         cout << "List empty!\n";
//         return;
//     }

//     if (head->data == key) {
//         deleteBeginning();
//         return;
//     }

//     Node* temp = head;
//     while (temp->next != NULL && temp->next->data != key)
//         temp = temp->next;

//     if (temp->next == NULL) {
//         cout << "Node not found!\n";
//         return;
//     }

//     Node* delNode = temp->next;
//     temp->next = temp->next->next;
//     delete delNode;
//     cout << "Deleted node " << key << ".\n";
// }

// void search(int key) {
//     Node* temp = head;
//     int pos = 1;

//     while (temp != NULL) {
//         if (temp->data == key) {
//             cout << "Found at position: " << pos << endl;
//             return;
//         }
//         temp = temp->next;
//         pos++;
//     }
//     cout << "Not found.\n";
// }

// void display() {
//     if (head == NULL) {
//         cout << "List empty!\n";
//         return;
//     }
//     cout << "Linked List: ";
//     Node* temp = head;
//     while (temp != NULL) {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }

// int main() {
//     int choice, value, key;

//     do {
//         cout << "\n--- SINGLY LINKED LIST MENU ---\n";
//         cout << "1. Insert at Beginning\n2. Insert at End\n3. Insert Before\n4. Insert After\n";
//         cout << "5. Delete Beginning\n6. Delete End\n7. Delete Specific Node\n";
//         cout << "8. Search Node\n9. Display\n10. Exit\n";
//         cout << "Enter choice: ";
//         cin >> choice;

//         switch (choice) {
//             case 1: cout << "Enter value: "; cin >> value; insertAtBeginning(value); break;
//             case 2: cout << "Enter value: "; cin >> value; insertAtEnd(value); break;
//             case 3: cout << "Insert value: "; cin >> value; cout << "Before key: "; cin >> key; insertBefore(key, value); break;
//             case 4: cout << "Insert value: "; cin >> value; cout << "After key: "; cin >> key; insertAfter(key, value); break;
//             case 5: deleteBeginning(); break;
//             case 6: deleteEnd(); break;
//             case 7: cout << "Enter key to delete: "; cin >> key; deleteNode(key); break;
//             case 8: cout << "Enter key to search: "; cin >> key; search(key); break;
//             case 9: display(); break;
//         }
//     } while (choice != 10);

//     return 0;
// }





//Question 2
// #include <iostream>
// using namespace std;

// struct Node {
//     int data;
//     Node* next;
// };

// Node* head = NULL;

// void insertEnd(int val) {
//     Node* newNode = new Node();
//     newNode->data = val;
//     newNode->next = NULL;

//     if (head == NULL) {
//         head = newNode;
//         return;
//     }

//     Node* temp = head;
//     while (temp->next != NULL) temp = temp->next;
//     temp->next = newNode;
// }

// int deleteOccurrences(int key) {
//     int count = 0;

//     while (head != NULL && head->data == key) {
//         Node* del = head;
//         head = head->next;
//         delete del;
//         count++;
//     }

//     Node* temp = head;

//     while (temp != NULL && temp->next != NULL) {
//         if (temp->next->data == key) {
//             Node* del = temp->next;
//             temp->next = temp->next->next;
//             delete del;
//             count++;
//         } else {
//             temp = temp->next;
//         }
//     }

//     return count;
// }

// void display() {
//     Node* temp = head;
//     while (temp != NULL) {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }

// int main() {
//     int n, x, key;

//     cout << "Enter number of elements: ";
//     cin >> n;

//     cout << "Enter values: ";
//     for (int i = 0; i < n; i++) {
//         cin >> x;
//         insertEnd(x);
//     }

//     cout << "Enter key to delete: ";
//     cin >> key;

//     int count = deleteOccurrences(key);

//     cout << "Count: " << count << endl;
//     cout << "Updated Linked List: ";
//     display();

//     return 0;
// }





//Question 3
// #include <iostream>
// using namespace std;

// struct Node {
//     int data;
//     Node* next;
// };

// Node* head = NULL;

// void insertEnd(int val) {
//     Node* newNode = new Node();
//     newNode->data = val;
//     newNode->next = NULL;

//     if (head == NULL) {
//         head = newNode;
//         return;
//     }

//     Node* temp = head;
//     while (temp->next != NULL) temp = temp->next;
//     temp->next = newNode;
// }

// void findMiddle() {
//     if (head == NULL) {
//         cout << "List empty!\n";
//         return;
//     }

//     Node* slow = head;
//     Node* fast = head;

//     while (fast != NULL && fast->next != NULL) {
//         slow = slow->next;
//         fast = fast->next->next;
//     }

//     cout << "Middle element: " << slow->data << endl;
// }

// int main() {
//     int n, x;
//     cout << "Enter number of nodes: ";
//     cin >> n;

//     cout << "Enter values: ";
//     for (int i = 0; i < n; i++) {
//         cin >> x;
//         insertEnd(x);
//     }

//     findMiddle();

//     return 0;
// }




//Question 4
// #include <iostream>
// using namespace std;

// struct Node {
//     int data;
//     Node* next;
// };

// Node* head = NULL;

// void insertEnd(int val) {
//     Node* newNode = new Node();
//     newNode->data = val;
//     newNode->next = NULL;

//     if (head == NULL) {
//         head = newNode;
//         return;
//     }

//     Node* temp = head;
//     while (temp->next != NULL) temp = temp->next;
//     temp->next = newNode;
// }

// void reverseList() {
//     Node* prev = NULL;
//     Node* curr = head;
//     Node* next = NULL;

//     while (curr != NULL) {
//         next = curr->next;
//         curr->next = prev;
//         prev = curr;
//         curr = next;
//     }

//     head = prev;
// }

// void display() {
//     Node* temp = head;
//     while (temp != NULL) {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }

// int main() {
//     int n, x;

//     cout << "Enter number of elements: ";
//     cin >> n;

//     cout << "Enter values: ";
//     for (int i = 0; i < n; i++) {
//         cin >> x;
//         insertEnd(x);
//     }

//     reverseList();

//     cout << "Reversed Linked List: ";
//     display();

//     return 0;
// }
