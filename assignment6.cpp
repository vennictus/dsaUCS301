// //Question 1
// #include <iostream>
// using namespace std;

// struct DNode {
//     int data;
//     DNode* prev;
//     DNode* next;
// };

// DNode* dhead = NULL;

// void dInsertBeginning(int val) {
//     DNode* newNode = new DNode();
//     newNode->data = val;
//     newNode->prev = NULL;
//     newNode->next = dhead;

//     if (dhead != NULL)
//         dhead->prev = newNode;

//     dhead = newNode;
// }

// void dInsertEnd(int val) {
//     DNode* newNode = new DNode();
//     newNode->data = val;
//     newNode->next = NULL;

//     if (dhead == NULL) {
//         newNode->prev = NULL;
//         dhead = newNode;
//         return;
//     }

//     DNode* temp = dhead;
//     while (temp->next != NULL)
//         temp = temp->next;

//     temp->next = newNode;
//     newNode->prev = temp;
// }

// void dInsertAfter(int key, int val) {
//     DNode* temp = dhead;

//     while (temp != NULL && temp->data != key)
//         temp = temp->next;

//     if (temp == NULL) {
//         cout << "Key not found.\n";
//         return;
//     }

//     DNode* newNode = new DNode();
//     newNode->data = val;

//     newNode->next = temp->next;
//     newNode->prev = temp;

//     if (temp->next != NULL)
//         temp->next->prev = newNode;

//     temp->next = newNode;
// }

// void dInsertBefore(int key, int val) {
//     if (dhead == NULL) return;

//     if (dhead->data == key) {
//         dInsertBeginning(val);
//         return;
//     }

//     DNode* temp = dhead;

//     while (temp != NULL && temp->data != key)
//         temp = temp->next;

//     if (temp == NULL) {
//         cout << "Key not found.\n";
//         return;
//     }

//     DNode* newNode = new DNode();
//     newNode->data = val;

//     newNode->prev = temp->prev;
//     newNode->next = temp;

//     temp->prev->next = newNode;
//     temp->prev = newNode;
// }

// void dDelete(int key) {
//     if (dhead == NULL) return;

//     if (dhead->data == key) {
//         DNode* temp = dhead;
//         dhead = dhead->next;
//         if (dhead != NULL) dhead->prev = NULL;
//         delete temp;
//         return;
//     }

//     DNode* temp = dhead;

//     while (temp != NULL && temp->data != key)
//         temp = temp->next;

//     if (temp == NULL) {
//         cout << "Key not found.\n";
//         return;
//     }

//     if (temp->next != NULL)
//         temp->next->prev = temp->prev;

//     temp->prev->next = temp->next;

//     delete temp;
// }

// void dSearch(int key) {
//     DNode* temp = dhead;
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

// void dDisplay() {
//     DNode* temp = dhead;
//     while (temp != NULL) {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }



// struct CNode {
//     int data;
//     CNode* next;
// };

// CNode* chead = NULL;

// void cInsertBeginning(int val) {
//     CNode* newNode = new CNode();
//     newNode->data = val;

//     if (chead == NULL) {
//         chead = newNode;
//         newNode->next = chead;
//         return;
//     }

//     CNode* temp = chead;
//     while (temp->next != chead)
//         temp = temp->next;

//     newNode->next = chead;
//     temp->next = newNode;
//     chead = newNode;
// }

// void cInsertEnd(int val) {
//     CNode* newNode = new CNode();
//     newNode->data = val;

//     if (chead == NULL) {
//         chead = newNode;
//         newNode->next = chead;
//         return;
//     }

//     CNode* temp = chead;
//     while (temp->next != chead)
//         temp = temp->next;

//     temp->next = newNode;
//     newNode->next = chead;
// }

// void cInsertAfter(int key, int val) {
//     if (chead == NULL) return;

//     CNode* temp = chead;

//     do {
//         if (temp->data == key) {
//             CNode* newNode = new CNode();
//             newNode->data = val;
//             newNode->next = temp->next;
//             temp->next = newNode;
//             return;
//         }
//         temp = temp->next;

//     } while (temp != chead);

//     cout << "Key not found.\n";
// }

// void cDelete(int key) {
//     if (chead == NULL) return;

//     if (chead->data == key && chead->next == chead) {
//         delete chead;
//         chead = NULL;
//         return;
//     }

//     CNode* curr = chead;
//     CNode* prev = NULL;

//     do {
//         if (curr->data == key) {
//             if (curr == chead) {
//                 CNode* last = chead;
//                 while (last->next != chead)
//                     last = last->next;

//                 chead = chead->next;
//                 last->next = chead;
//             } else {
//                 prev->next = curr->next;
//             }
//             delete curr;
//             return;
//         }

//         prev = curr;
//         curr = curr->next;

//     } while (curr != chead);
// }

// void cSearch(int key) {
//     if (chead == NULL) return;

//     CNode* temp = chead;
//     int pos = 1;

//     do {
//         if (temp->data == key) {
//             cout << "Found at position: " << pos << endl;
//             return;
//         }

//         temp = temp->next;
//         pos++;

//     } while (temp != chead);

//     cout << "Not found.\n";
// }

// void cDisplay() {
//     if (chead == NULL) return;

//     CNode* temp = chead;

//     do {
//         cout << temp->data << " ";
//         temp = temp->next;
//     } while (temp != chead);

//     cout << endl;
// }


// int main() {
//     int choice, val, key;

//     do {
//         cout << "\n--- MENU ---\n";

//         cout << "1. Doubly Insert Beginning\n";
//         cout << "2. Doubly Insert End\n";
//         cout << "3. Doubly Insert After\n";
//         cout << "4. Doubly Insert Before\n";
//         cout << "5. Doubly Delete\n";
//         cout << "6. Doubly Search\n";
//         cout << "7. Doubly Display\n";

//         cout << "8. Circular Insert Beginning\n";
//         cout << "9. Circular Insert End\n";
//         cout << "10. Circular Insert After\n";
//         cout << "11. Circular Delete\n";
//         cout << "12. Circular Search\n";
//         cout << "13. Circular Display\n";

//         cout << "14. Exit\n";
//         cout << "Enter choice: ";
//         cin >> choice;

//         switch (choice) {
//             case 1: cout << "Value: "; cin >> val; dInsertBeginning(val); break;
//             case 2: cout << "Value: "; cin >> val; dInsertEnd(val); break;
//             case 3: cout << "After key: "; cin >> key; cout << "Value: "; cin >> val; dInsertAfter(key,val); break;
//             case 4: cout << "Before key: "; cin >> key; cout << "Value: "; cin >> val; dInsertBefore(key,val); break;
//             case 5: cout << "Delete key: "; cin >> key; dDelete(key); break;
//             case 6: cout << "Search key: "; cin >> key; dSearch(key); break;
//             case 7: dDisplay(); break;

//             case 8: cout << "Value: "; cin >> val; cInsertBeginning(val); break;
//             case 9: cout << "Value: "; cin >> val; cInsertEnd(val); break;
//             case 10: cout << "After key: "; cin >> key; cout << "Value: "; cin >> val; cInsertAfter(key,val); break;
//             case 11: cout << "Delete key: "; cin >> key; cDelete(key); break;
//             case 12: cout << "Search key: "; cin >> key; cSearch(key); break;
//             case 13: cDisplay(); break;
//         }

//     } while (choice != 14);

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

//     if (head == NULL) {
//         head = newNode;
//         newNode->next = head;
//         return;
//     }

//     Node* temp = head;
//     while (temp->next != head) temp = temp->next;

//     temp->next = newNode;
//     newNode->next = head;
// }

// void displayCircular() {
//     if (head == NULL) return;

//     Node* temp = head;
//     do {
//         cout << temp->data << " ";
//         temp = temp->next;
//     } while (temp != head);

//     cout << head->data; // repeat head
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

//     displayCircular();

//     return 0;
// }





//Question 3
// #include <iostream>
// using namespace std;

// struct DNode {
//     int data;
//     DNode* next;
//     DNode* prev;
// };

// struct CNode {
//     int data;
//     CNode* next;
// };

// DNode* dhead = NULL;
// CNode* chead = NULL;

// int sizeDoubly() {
//     int count = 0;
//     DNode* temp = dhead;
//     while (temp != NULL) {
//         count++;
//         temp = temp->next;
//     }
//     return count;
// }

// int sizeCircular() {
//     if (chead == NULL) return 0;
//     int count = 0;
//     CNode* temp = chead;
//     do {
//         count++;
//         temp = temp->next;
//     } while (temp != chead);
//     return count;
// }

// int main() {
//     cout << "Size of Doubly Linked List: " << sizeDoubly() << endl;
//     cout << "Size of Circular Linked List: " << sizeCircular() << endl;
//     return 0;
// }




//Question 4
// #include <iostream>
// using namespace std;

// struct Node {
//     char data;
//     Node* next;
//     Node* prev;
// };

// Node* head = NULL;

// void insertEnd(char c) {
//     Node* newNode = new Node();
//     newNode->data = c;
//     newNode->next = NULL;

//     if (head == NULL) {
//         newNode->prev = NULL;
//         head = newNode;
//         return;
//     }

//     Node* temp = head;
//     while (temp->next != NULL) temp = temp->next;

//     temp->next = newNode;
//     newNode->prev = temp;
// }

// bool isPalindrome() {
//     if (head == NULL) return true;

//     Node* left = head;
//     Node* right = head;

//     while (right->next != NULL) right = right->next;

//     while (left != right && right->next != left) {
//         if (left->data != right->data) return false;
//         left = left->next;
//         right = right->prev;
//     }

//     return true;
// }

// int main() {
//     int n;
//     char c;

//     cout << "Enter number of characters: ";
//     cin >> n;

//     cout << "Enter characters: ";
//     for (int i = 0; i < n; i++) {
//         cin >> c;
//         insertEnd(c);
//     }

//     if (isPalindrome()) cout << "True";
//     else cout << "False";

//     return 0;
// }





//Question 5
// #include <iostream>
// using namespace std;

// struct Node {
//     int data;
//     Node* next;
// };

// Node* head = NULL;

// bool isCircular() {
//     if (head == NULL) return true;

//     Node* temp = head->next;

//     while (temp != NULL && temp != head)
//         temp = temp->next;

//     return temp == head;
// }

// int main() {
//     if (isCircular()) cout << "True";
//     else cout << "False";

//     return 0;
// }
