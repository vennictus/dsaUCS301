//Question 1


// #include <iostream>
// #include <cctype>
// using namespace std;

// class ArrayOps {
//     int arr[100], size;

// public:
//     ArrayOps() { size = 0; }

//     void create() {
//         cout << "Enter number of elements: ";
//         cin >> size;
//         cout << "Enter elements: ";
//         for (int i = 0; i < size; i++)
//             cin >> arr[i];
//     }

//     void display() {
//         if (size == 0) {
//             cout << "Array is empty\n";
//             return;
//         }
//         cout << "Array elements: ";
//         for (int i = 0; i < size; i++)
//             cout << arr[i] << " ";
//         cout << endl;
//     }

//     void insert() {
//         int pos, val;
//         cout << "Enter position (0-based): ";
//         cin >> pos;
//         cout << "Enter value: ";
//         cin >> val;
//         if (pos < 0 || pos > size) {
//             cout << "Invalid position\n";
//             return;
//         }
//         for (int i = size; i > pos; i--)
//             arr[i] = arr[i - 1];
//         arr[pos] = val;
//         size++;
//     }

//     void deleteElem() {
//         int pos;
//         cout << "Enter position (0-based): ";
//         cin >> pos;
//         if (pos < 0 || pos >= size) {
//             cout << "Invalid position\n";
//             return;
//         }
//         for (int i = pos; i < size - 1; i++)
//             arr[i] = arr[i + 1];
//         size--;
//     }

//     void linearSearch() {
//         int key;
//         cout << "Enter value to search: ";
//         cin >> key;
//         for (int i = 0; i < size; i++) {
//             if (arr[i] == key) {
//                 cout << "Element found at position " << i << endl;
//                 return;
//             }
//         }
//         cout << "Element not found\n";
//     }
// };

// int main() {
//     ArrayOps a;
//     char choice;
//     do {
//         cout << "\n--- MENU ---\n";
//         cout << "(C)REATE\n(D)ISPLAY\n(I)NSERT\n(R)EMOVE\n(S)EARCH\n(E)XIT\n";
//         cout << "Enter choice: ";
//         cin >> choice;
//         choice = tolower(choice);

//         switch (choice) {
//             case 'c': a.create(); break;
//             case 'd': a.display(); break;
//             case 'i': a.insert(); break;
//             case 'r': a.deleteElem(); break;
//             case 's': a.linearSearch(); break;
//             case 'e': cout << "Exiting...\n"; break;
//             default: cout << "Invalid choice, please try again.\n";
//         }
//     } while (choice != 'e');
//     return 0;
// }

// ===================================================================================================

//Question 2


#include <iostream>
using namespace std;

int main() {
    int arr[100], size;
    cout << "Enter number of elements: ";
    cin >> size;
    cout << "Enter elements: ";
    for (int i = 0; i < size; i++)
        cin >> arr[i];

    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; ) {
            if (arr[i] == arr[j]) {
                for (int k = j; k < size - 1; k++)
                    arr[k] = arr[k + 1];
                size--;
            } else {
                j++;
            }
        }
    }

    cout << "Array after removing duplicates: ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}

// ===================================================================================================